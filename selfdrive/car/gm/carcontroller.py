from random import randint
from common.log import Loger
from cereal import car, log, messaging
from common.conversions import Conversions as CV
from common.realtime import DT_CTRL
from common.numpy_fast import clip, interp
from opendbc.can.packer import CANPacker
from selfdrive.car import apply_std_steer_torque_limits
from selfdrive.car.gm import gmcan
from selfdrive.car.gm.gmcan import create_buttons, create_resume_button, create_accel_command
from selfdrive.car import create_gas_interceptor_command
from selfdrive.car.gm.values import DBC, AccState, CanBus, CarControllerParams, CruiseButtons
import cereal.messaging as messaging
from common.params import Params
from selfdrive.ntune import ntune_scc_get, ntune_scc_enabled

LongitudinalPlanSource = log.LongitudinalPlan.LongitudinalPlanSource
VisualAlert = car.CarControl.HUDControl.VisualAlert

class CarController:

  def __init__(self, dbc_name, CP, VM):
    self.start_time = 0.
    self.apply_steer_last = 0
    self.apply_gas = 0
    self.apply_brake = 0

    #auto resume
    self.last_lead_distance = 0
    self.last_vLead = 0

    self.frame = 0
    self.lka_steering_cmd_counter_last = -1 # GM: EPS fault workaround(#22404)
    self.lka_icon_status_last = (False, False)
    self.steer_rate_limited = False

    # DisableDisengageOnGas
    self.params = CarControllerParams()
    self.disengage_on_gas = not Params().get_bool("DisableDisengageOnGas")

    # stop at Stopsignal
    self.stopsign_enabled = ntune_scc_enabled('StopAtStopSign')

    self.sm = messaging.SubMaster(['controlsState', 'longitudinalPlan', 'radarState'])
    self.log = Loger()

    self.e2e_standstill_enable = Params().get_bool("DepartChimeAtResume")
    self.e2e_standstill = False
    self.e2e_standstill_stat = False
    self.e2e_standstill_timer = 0
    self.packer = CANPacker(dbc_name)
    self.packer_pt = CANPacker(DBC[CP.carFingerprint]['pt'])
    self.packer_obj = CANPacker(DBC[CP.carFingerprint]['radar'])
    self.packer_ch = CANPacker(DBC[CP.carFingerprint]['chassis'])

  def update(self, CC, CS, enabled, controls):
    actuators = CC.actuators
    hud_control = CC.hudControl
    hud_alert = hud_control.visualAlert
    hud_v_cruise = hud_control.setSpeed
    if hud_v_cruise > 70:
      hud_v_cruise = 0

    # Send CAN commands.
    can_sends = []

    # Steering (50Hz)
    # Avoid GM EPS faults when transmitting messages too close together: skip this transmit if we just received the
    # next Panda loopback confirmation in the current CS frame.
    if CS.lka_steering_cmd_counter != self.lka_steering_cmd_counter_last:
      self.lka_steering_cmd_counter_last = CS.lka_steering_cmd_counter
    elif (self.frame % self.params.STEER_STEP) == 0:
      lkas_enabled = (CC.latActive or CS.pause_long_on_gas_press) and CS.lkMode and CS.out.vEgo > self.params.MIN_STEER_SPEED
      if lkas_enabled:
        new_steer = int(round(actuators.steer * self.params.STEER_MAX))
        apply_steer = apply_std_steer_torque_limits(new_steer, self.apply_steer_last, CS.out.steeringTorque, self.params)
        self.steer_rate_limited = new_steer != apply_steer
      else:
        apply_steer = 0

      self.apply_steer_last = apply_steer

      # GM EPS faults on any gap in received message counters. To handle transient OP/Panda safety sync issues at the
      # moment of disengaging, increment the counter based on the last message known to pass Panda safety checks.
      idx = (CS.lka_steering_cmd_counter + 1) % 4

      can_sends.append(gmcan.create_steering_control(self.packer_pt, CanBus.POWERTRAIN, apply_steer, idx, lkas_enabled))

    # Gas/regen and brakes - all at 25Hz
    if (self.frame % 4) == 0:
      if not CC.longActive or CS.pause_long_on_gas_press:
        # Stock ECU sends max regen when not enabled
        self.apply_gas = self.params.MAX_ACC_REGEN
        self.apply_brake = 0
      else:
        self.apply_gas = int(round(interp(actuators.accel, self.params.GAS_LOOKUP_BP, self.params.GAS_LOOKUP_V)))
        self.apply_brake = int(round(interp(actuators.accel, self.params.BRAKE_LOOKUP_BP, self.params.BRAKE_LOOKUP_V)))

      idx = (self.frame // 4) % 4

      # Auto Hold State
      if CS.cruiseMain and not CC.longActive and CS.autoHold and CS.autoHoldActive and \
             not CS.out.gasPressed and CS.out.gearShifter in ['drive','low'] and \
             CS.out.vEgo < 0.01 and not CS.regenPaddlePressed and CS.autoholdBrakeStart:

        car_stopping = self.apply_gas < self.params.ZERO_GAS
        standstill = CS.pcm_acc_status == AccState.STANDSTILL

        at_full_stop = standstill and car_stopping
        near_stop = (CS.out.vEgo < self.params.NEAR_STOP_BRAKE_PHASE) and car_stopping
        can_sends.append(gmcan.create_friction_brake_command(self.packer_ch, CanBus.CHASSIS, self.apply_brake, idx, near_stop, at_full_stop))
        CS.autoHoldActivated = True

      else:
        if CS.pause_long_on_gas_press:
          at_full_stop = False
          near_stop = False
          car_stopping = False
          standstill = False
        else:
          car_stopping = self.apply_gas < self.params.ZERO_GAS
          standstill = CS.pcm_acc_status == AccState.STANDSTILL
          at_full_stop = CC.longActive and standstill and car_stopping
          near_stop = CC.longActive and (CS.out.vEgo < self.params.NEAR_STOP_BRAKE_PHASE) and car_stopping

        can_sends.append(gmcan.create_friction_brake_command(self.packer_ch, CanBus.CHASSIS, self.apply_brake, idx, near_stop, at_full_stop))
        CS.autoHoldActivated = False

        CC.enabled = enabled
        self.update_auto_resume(CC, CS, can_sends)

        can_sends.append(gmcan.create_gas_regen_command(self.packer_pt, CanBus.POWERTRAIN, self.apply_gas, idx, CC.enabled, at_full_stop))

    #opkr
    if self.e2e_standstill_enable:
      try:
        self.sm.update(0)

        if self.e2e_standstill:
          self.e2e_standstill_timer += 1
          if self.e2e_standstill_timer > 500:
            self.e2e_standstill = False
            self.e2e_standstill_timer = 0
        elif CS.v_Ego > 0:
          self.e2e_standstill = False
          self.e2e_standstill_stat = False
          self.e2e_standstill_timer = 0
        elif self.e2e_standstill_stat and self.sm['longitudinalPlan'].trafficState != 1 and CS.v_Ego == 0:
          self.e2e_standstill = True
          self.e2e_standstill_stat = False
          self.e2e_standstill_timer = 0
        elif self.sm['longitudinalPlan'].trafficState == 1 and self.sm['longitudinalPlan'].stopLine[12] < 10 and CS.v_Ego == 0:
          self.e2e_standstill_timer += 1
          if self.e2e_standstill_timer > 300:
            self.e2e_standstill_timer = 101
            self.e2e_standstill_stat = True
        else:
          self.e2e_standstill_timer = 0
      except:
        pass

    # Send dashboard UI commands (ACC status), 25hz
    if (self.frame % 4) == 0:
      send_fcw = hud_alert == VisualAlert.fcw
      follow_level = CS.get_follow_level()
      can_sends.append(gmcan.create_acc_dashboard_command(self.packer_pt, CanBus.POWERTRAIN, CC.enabled, \
                     hud_v_cruise * CV.MS_TO_KPH, hud_control.leadVisible, send_fcw, follow_level))

    # Radar needs to know current speed and yaw rate (50hz),
    # and that ADAS is alive (10hz)
    time_and_headlights_step = 10
    tt = self.frame * DT_CTRL

    if self.frame % time_and_headlights_step == 0:
      idx = (self.frame // time_and_headlights_step) % 4
      can_sends.append(gmcan.create_adas_time_status(CanBus.OBSTACLE, int((tt - self.start_time) * 60), idx))
      can_sends.append(gmcan.create_adas_headlights_status(self.packer_obj, CanBus.OBSTACLE))

    speed_and_accelerometer_step = 2
    if self.frame % speed_and_accelerometer_step == 0:
      idx = (self.frame // speed_and_accelerometer_step) % 4
      can_sends.append(gmcan.create_adas_steering_status(CanBus.OBSTACLE, idx))
      can_sends.append(gmcan.create_adas_accelerometer_speed_status(CanBus.OBSTACLE, CS.out.vEgo, idx))

    if self.frame % self.params.ADAS_KEEPALIVE_STEP == 0:
      can_sends += gmcan.create_adas_keepalive(CanBus.POWERTRAIN)

    # Show green icon when LKA torque is applied, and
    # alarming orange icon when approaching torque limit.
    # If not sent again, LKA icon disappears in about 5 seconds.
    # Conveniently, sending camera message periodically also works as a keepalive.
    lka_active = CS.lkas_status == 1
    lka_critical = lka_active and abs(actuators.steer) > 0.9
    lka_icon_status = (lka_active, lka_critical)
    if self.frame % self.params.CAMERA_KEEPALIVE_STEP == 0 or lka_icon_status != self.lka_icon_status_last:
      steer_alert = hud_alert in (VisualAlert.steerRequired, VisualAlert.ldw)
      can_sends.append(gmcan.create_lka_icon_command(CanBus.SW_GMLAN, lka_active, lka_critical, steer_alert))
      self.lka_icon_status_last = lka_icon_status

    new_actuators = actuators.copy()
    new_actuators.steer = self.apply_steer_last / self.params.STEER_MAX
    new_actuators.gas = self.apply_gas
    new_actuators.brake = self.apply_brake

    self.frame += 1
    return new_actuators, can_sends

  def update_auto_resume(self, CC, CS, can_sends):
    if (self.frame % 4) == 0:
      idx = (self.frame // 4) % 4
      car_stopping = self.apply_gas < self.params.ZERO_GAS
      standstill = CS.pcm_acc_status == AccState.STANDSTILL
      if CS.lead_distance <= 0 or CS.lead_speed <= 0:
        return

      # condition for car stopped behid lead car
      if car_stopping and standstill and not CS.out.gasPressed:
        if (self.last_lead_distance == 0) or (self.last_vLead == 0):
          self.last_lead_distance = CS.lead_distance
          self.last_vLead = CS.lead_speed
        elif (abs(CS.lead_distance - self.last_lead_distance) > 0.01) or \
             (abs(CS.lead_speed - self.last_vLead) > 0.01):
          self.apply_gas = self.params.ZERO_GAS + 307
          can_sends.append(create_accel_command(self.packer_pt, CanBus.POWERTRAIN, idx, self.apply_gas))
          CS.cruiseState_resumeButton = True
          can_sends.append(create_buttons(self.packer_pt, CanBus.POWERTRAIN, idx, CruiseButtons.RES_ACCEL))
          can_sends.append(create_buttons(self.packer_pt, CanBus.POWERTRAIN, idx, CS.cruiseState_resumeButton))

      elif self.last_lead_distance != 0:
        self.last_lead_distance = 0

      elif self.last_vLead != 0:
        self.last_vLead = 0