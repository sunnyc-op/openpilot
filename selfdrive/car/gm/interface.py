#!/usr/bin/env python3
from typing import List
from cereal import car, log
from math import fabs, erf

from common.numpy_fast import interp
from common.conversions import Conversions as CV
from selfdrive.car import STD_CARGO_KG, scale_rot_inertia, scale_tire_stiffness, is_ecu_disconnected, gen_empty_fingerprint, get_safety_config
from selfdrive.car.gm.values import CAR, Ecu, ECU_FINGERPRINT, CruiseButtons, \
                                    AccState, FINGERPRINTS, CarControllerParams
from selfdrive.car.interfaces import CarInterfaceBase
from common.params import Params
from decimal import Decimal
from selfdrive.ntune import ntune_common_get, ntune_lqr_get, ntune_torque_get, ntune_scc_get
from selfdrive.car.isotp_parallel_query import IsoTpParallelQuery
from common.log import Loger
from selfdrive.car.disable_ecu import enable_radar_tracks, disable_ecu

GearShifter = car.CarState.GearShifter
EventName = car.CarEvent.EventName
ButtonType = car.CarState.ButtonEvent.Type


# meant for traditional ff fits
def get_steer_feedforward_sigmoid1(angle, speed, ANGLE_COEF, ANGLE_COEF2, ANGLE_OFFSET, SPEED_OFFSET, SIGMOID_COEF_RIGHT, SIGMOID_COEF_LEFT, SPEED_COEF):
  x = ANGLE_COEF * (angle) / max(0.01,speed)
  sigmoid = x / (1. + fabs(x))
  return ((SIGMOID_COEF_RIGHT if angle > 0. else SIGMOID_COEF_LEFT) * sigmoid) * (0.01 + speed + SPEED_OFFSET) ** ANGLE_COEF2 + ANGLE_OFFSET * (angle * SPEED_COEF - atan(angle * SPEED_COEF))

# meant for torque fits
def get_steer_feedforward_erf(angle, speed, ANGLE_COEF, ANGLE_COEF2, ANGLE_OFFSET, SPEED_OFFSET, SIGMOID_COEF_RIGHT, SIGMOID_COEF_LEFT, SPEED_COEF):
  x = ANGLE_COEF * (angle) * (40.23 / (max(0.05,speed + SPEED_OFFSET))**SPEED_COEF)
  sigmoid = erf(x)
  return ((SIGMOID_COEF_RIGHT if angle < 0. else SIGMOID_COEF_LEFT) * sigmoid) + ANGLE_COEF2 * angle


class CarInterface(CarInterfaceBase):
  def __init__(self, CP, CarController, CarState):
    super().__init__(CP, CarController, CarState)


  def _update(self, c: car.CarControl) -> car.CarState:
    pass


  @staticmethod
  def get_pid_accel_limits(CP, current_speed, cruise_speed):
    _params = CarControllerParams()
    return _params.ACCEL_MIN, _params.ACCEL_MAX

  # Determined by iteratively plotting and minimizing error for f(angle, speed) = steer.
  @staticmethod
  def get_steer_feedforward_volt(desired_lateral_accel, v_ego):
    ANGLE_COEF = 0.08617848
    ANGLE_COEF2 = 0.12568428
    ANGLE_OFFSET = 0.00205026
    SPEED_OFFSET = -3.48009247
    SIGMOID_COEF_RIGHT = 0.56664089
    SIGMOID_COEF_LEFT = 0.50360594
    SPEED_COEF = 0.55322718
    return get_steer_feedforward_erf(desired_lateral_accel, v_ego, ANGLE_COEF, ANGLE_COEF2, ANGLE_OFFSET, SPEED_OFFSET, SIGMOID_COEF_RIGHT, SIGMOID_COEF_LEFT, SPEED_COEF)

  @staticmethod
  def get_steer_feedforward_acadia(desired_angle, v_ego):
    desired_angle *= 0.09760208
    sigmoid = desired_angle / (1 + fabs(desired_angle))
    return 0.04689655 * sigmoid * (v_ego + 10.028217)

  def get_steer_feedforward_function(self):
    if self.CP.carFingerprint == CAR.VOLT:
      return self.get_steer_feedforward_volt
    elif self.CP.carFingerprint == CAR.ACADIA:
      return self.get_steer_feedforward_acadia
    else:
      return CarInterfaceBase.get_steer_feedforward_default

  @staticmethod
  def get_params(candidate, fingerprint=gen_empty_fingerprint(), car_fw=None, disable_radar=False):
    ret = CarInterfaceBase.get_std_params(candidate, fingerprint)
    ret.carName = "gm"
    ret.safetyConfigs = [get_safety_config(car.CarParams.SafetyModel.gm)]
    ret.autoResumeSng = ret.minEnableSpeed == -1
    ret.pcmCruise = False  # stock cruise control is kept off

    # These cars have been put into dashcam only due to both a lack of users and test coverage.
    # These cars likely still work fine. Once a user confirms each car works and a test route is
    # added to selfdrive/test/test_routes, we can remove it from this list.
    ret.dashcamOnly = candidate in {CAR.CADILLAC_ATS, CAR.HOLDEN_ASTRA, CAR.MALIBU, CAR.BUICK_REGAL}

    # Presence of a camera on the object bus is ok.
    # Have to go to read_only if ASCM is online (ACC-enabled cars),
    # or camera is on powertrain bus (LKA cars without ACC).
    # for white panda
    # ret.enableGasInterceptor = 0x201 in fingerprint[0]
    # ret.enableGasInterceptor = 512 in fingerprint[0]
    ret.enableCamera = is_ecu_disconnected(fingerprint[0], FINGERPRINTS, ECU_FINGERPRINT, candidate, Ecu.fwdCamera)
    ret.openpilotLongitudinalControl = Params().get_bool('LongControlEnabled') or ret.enableCamera # or ret.enableGasInterceptor
    tire_stiffness_factor = 0.469
    ret.maxSteeringAngleDeg = 90.

    # for autohold on ui icon
    ret.enableAutoHold = 241 in fingerprint[0]

    # Start with a baseline lateral tuning for all GM vehicles. Override tuning as needed in each model section below.
    ret.minSteerSpeed = 7 * CV.MPH_TO_MS
    ret.minEnableSpeed = -1
    ret.mass = 1607. + STD_CARGO_KG
    ret.wheelbase = 2.69
    ret.steerRatio = 16.7
    ret.steerActuatorDelay = 0.22  # Default delay, not measured yet
    ret.steerRatioRear = 0.
    ret.centerToFront = ret.wheelbase * 0.49 # wild guess

    ret.disableLateralLiveTuning = False

    # lateral
    lateral_control = Params().get("LateralControl", encoding='utf-8')
    if lateral_control == 'INDI':
      ret.lateralTuning.init('indi')
      ret.lateralTuning.indi.innerLoopGainBP = [0.]
      ret.lateralTuning.indi.innerLoopGainV = [3.3]
      ret.lateralTuning.indi.outerLoopGainBP = [0.]
      ret.lateralTuning.indi.outerLoopGainV = [2.8]
      ret.lateralTuning.indi.timeConstantBP = [0.]
      ret.lateralTuning.indi.timeConstantV = [1.4]
      ret.lateralTuning.indi.actuatorEffectivenessBP = [0.]
      ret.lateralTuning.indi.actuatorEffectivenessV = [1.8]
    elif lateral_control == 'LQR':
      ret.lateralTuning.init('lqr')

      ret.lateralTuning.lqr.scale = 1600.
      ret.lateralTuning.lqr.ki = 0.01
      ret.lateralTuning.lqr.dcGain = 0.0025

      ret.lateralTuning.lqr.a = [0., 1., -0.22619643, 1.21822268]
      ret.lateralTuning.lqr.b = [-1.92006585e-04, 3.95603032e-05]
      ret.lateralTuning.lqr.c = [1., 0.]
      ret.lateralTuning.lqr.k = [-110., 451.]
      ret.lateralTuning.lqr.l = [0.33, 0.318]
    elif lateral_control == 'PID':
      ret.lateralTuning.init('pid')
      if candidate == CAR.VOLT:
        ret.lateralTuning.pid.kiBP, ret.lateralTuning.pid.kpBP = [[0.], [0.]]
        ret.lateralTuning.pid.kiV, ret.lateralTuning.pid.kpV = [[0.0175], [0.185]]
        ret.lateralTuning.pid.kf = 1. # get_steer_feedforward_volt()
        ret.maxSteeringAngleDeg = 90.
        # D gain
        ret.lateralTuning.pid.kdBP = [0., 15., 33.]
        ret.lateralTuning.pid.kdV = [0.49, 0.65, 0.725]  #corolla from shane fork : 0.725

    elif lateral_control == 'TORQUE':
      ret.lateralTuning.init('torque')

    params = Params()

    if params.get_bool("UseNpilotManager"):
      ret.steerRatio = max(ntune_common_get('steerRatio'), 16.5)
    else:
      if not params.get_bool("UseBaseTorqueValues"):
        ret.steerRatio = float(Decimal(params.get("SteerRatioAdj", encoding="utf8")) * Decimal('0.01'))

    if ret.lateralTuning.which() == 'torque':
      if params.get_bool("UseNpilotManager"):
        try:
          torque_lat_accel_factor = ntune_torque_get('latAccelFactor') #LAT_ACCEL_FACTOR
          torque_friction = ntune_torque_get('friction') #FRICTION
        except:
          torque_lat_accel_factor = float(Decimal(params.get("TorqueMaxLatAccel", encoding="utf8")) * Decimal('0.1')) #LAT_ACCEL_FACTOR
          torque_friction = float(Decimal(params.get("TorqueFriction", encoding="utf8")) * Decimal('0.001')) #FRICTION

      else:
        torque_lat_accel_factor = float(Decimal(params.get("TorqueMaxLatAccel", encoding="utf8")) * Decimal('0.1')) #LAT_ACCEL_FACTOR
        torque_friction = float(Decimal(params.get("TorqueFriction", encoding="utf8")) * Decimal('0.001')) #FRICTION

        if params.get_bool("UseBaseTorqueValues"):
          try:
            torque_params = CarInterfaceBase.get_torque_params(candidate) #selfdrive/car/torque_data 자동으로 가져오기
            torque_lat_accel_factor = torque_params['LAT_ACCEL_FACTOR']
            torque_friction = torque_params['FRICTION']
          except:
            params.put_bool("UseBaseTorqueValues", False)
            torque_lat_accel_factor = float(Decimal(params.get("TorqueMaxLatAccel", encoding="utf8")) * Decimal('0.1')) #LAT_ACCEL_FACTOR
            torque_friction = float(Decimal(params.get("TorqueFriction", encoding="utf8")) * Decimal('0.001')) #FRICTION

      #torque
      CarInterfaceBase.configure_torque_tune(ret.lateralTuning, torque_lat_accel_factor, torque_friction)

    # TODO: get actual value, for now starting with reasonable value for
    # civic and scaling by mass and wheelbase
    ret.rotationalInertia = scale_rot_inertia(ret.mass, ret.wheelbase)

    # TODO: start from empirically derived lateral slip stiffness for the civic and scale by
    # mass and CG position, so all cars will have approximately similar dyn behaviors
    ret.tireStiffnessFront, ret.tireStiffnessRear = scale_tire_stiffness(ret.mass, ret.wheelbase, ret.centerToFront, \
        tire_stiffness_factor=tire_stiffness_factor)

    ret.steerControlType = car.CarParams.SteerControlType.torque
    ret.stoppingControl = True

    ret.longitudinalTuning.deadzoneBP = [0., 9.]
    ret.longitudinalTuning.deadzoneV = [0.0, .15]

    ret.longitudinalTuning.kpBP = [0, 10 * CV.KPH_TO_MS, 20 * CV.KPH_TO_MS, 50 * CV.KPH_TO_MS, 70 * CV.KPH_TO_MS, 120 * CV.KPH_TO_MS]
    ret.longitudinalTuning.kpV = [2.4, 1.5, 1., .6, .4, .3]
    #ret.longitudinalTuning.kpBP = [5., 15., 35.] # twilsonco
    #ret.longitudinalTuning.kpV = [0.9, 0.9, 0.8] #twilsonco
    ret.longitudinalTuning.kiBP = [0, 20 * CV.KPH_TO_MS, 30 * CV.KPH_TO_MS, 50 * CV.KPH_TO_MS, 70 * CV.KPH_TO_MS, 120 * CV.KPH_TO_MS]
    ret.longitudinalTuning.kiV = [0.35, 0.53, 0.62, 0.7, 0.5, 0.36]
    ret.longitudinalActuatorDelayLowerBound = 0.3
    ret.longitudinalActuatorDelayUpperBound = 0.3

    ret.stopAccel = min(ntune_scc_get('stopAccel'), -2.0)
    ret.stoppingDecelRate = max(ntune_scc_get('stoppingDecelRate'), 3.0) #0.4  # brake_travel/s while trying to stop
    ret.vEgoStopping = max(ntune_scc_get('vEgoStopping'), 0.6) #0.5
    ret.vEgoStarting = max(ntune_scc_get('vEgoStarting'), 0.3) #0.5 # needs to be >= vEgoStopping to avoid state transition oscillation

    if params.get_bool("UseNpilotManager"):
      ret.steerActuatorDelay = max(ntune_common_get('steerActuatorDelay'), 0.22)
      ret.steerLimitTimer = max(ntune_common_get('steerLimitTimer'), 3.0)
    else:
      ret.steerActuatorDelay = float(Decimal(params.get("SteerActuatorDelayAdj", encoding="utf8")) * Decimal('0.01'))
      ret.steerLimitTimer = float(Decimal(params.get("SteerLimitTimerAdj", encoding="utf8")) * Decimal('0.01'))

    ret.radarTimeStep = 1/15  # GM radar runs at 15Hz instead of standard 20Hz

    return ret

  # returns a car.CarState
  def update(self, c: car.CarControl, can_strings: List[bytes]) -> car.CarState:
    self.cp.update_strings(can_strings)
    self.cp_loopback.update_strings(can_strings) # GM: EPS fault workaround (#22404)

    self.cp_chassis.update_strings(can_strings) # for Brake Light
    ret = self.CS.update(self.cp, self.cp_loopback, self.cp_chassis) # GM: EPS fault workaround (#22404)

    #brake autohold
    if not self.CS.autoholdBrakeStart and self.CS.brakePressVal > 40.0:
      self.CS.autoholdBrakeStart = True

    cruiseEnabled = self.CS.pcm_acc_status != AccState.OFF
    ret.cruiseState.enabled = cruiseEnabled

    ret.cruiseGap = self.CS.follow_level

    ret.canValid = self.cp.can_valid and self.cp_loopback.can_valid # GM: EPS fault workaround (#22404)
    ret.steeringRateLimited = self.CC.steer_rate_limited if self.CC is not None else False

    ret.engineRPM = self.CS.engineRPM

    buttonEvents = []

    if self.CS.cruise_buttons != self.CS.prev_cruise_buttons and self.CS.prev_cruise_buttons != CruiseButtons.INIT:
      be = car.CarState.ButtonEvent.new_message()
      be.type = ButtonType.unknown
      if self.CS.cruise_buttons != CruiseButtons.UNPRESS:
        be.pressed = True
        but = self.CS.cruise_buttons
      else:
        be.pressed = False
        but = self.CS.prev_cruise_buttons
      if but == CruiseButtons.RES_ACCEL:
        if not (ret.cruiseState.enabled and ret.standstill):
          be.type = ButtonType.accelCruise  # Suppress resume button if we're resuming from stop so we don't adjust speed.
      #elif but == CruiseButtons.RESUME:
      #  if ret.autoResume and ret.cruiseState.enabled and ret.standstill:
      #    be.type = ButtonType.resumeCruise
      elif but == CruiseButtons.SET_DECEL:
        if not cruiseEnabled and not self.CS.lkMode:
          self.lkMode = True
        be.type = ButtonType.decelCruise
      elif but == CruiseButtons.CANCEL:
        be.type = ButtonType.cancel
      elif but == CruiseButtons.MAIN:
        be.type = ButtonType.altButton3
      buttonEvents.append(be)

    ret.buttonEvents = buttonEvents

    if cruiseEnabled and self.CS.lka_button and self.CS.lka_button != self.CS.prev_lka_button:
      self.CS.lkMode = not self.CS.lkMode

    if self.CS.distance_button and self.CS.distance_button != self.CS.prev_distance_button:
       self.CS.follow_level -= 1
       if self.CS.follow_level < 1:
         self.CS.follow_level = 3

    events = self.create_common_events(ret, pcm_enable=False)

    if ret.vEgo < self.CP.minEnableSpeed and self.CS.pcm_acc_status != AccState.ACTIVE:
      events.add(EventName.belowEngageSpeed)
    if self.CS.pause_long_on_gas_press:
      events.add(EventName.gasPressedOverride)
	#autohold event
    if self.CS.autoHoldActivated:
      events.add(car.CarEvent.EventName.autoHoldActivated)

    #opkr
    if self.CC.e2e_standstill:
      events.add(EventName.chimeAtResume)  
    # handle button presses
    for b in ret.buttonEvents:
      # do enable on both accel(or resume) and decel buttons
      if b.type == ButtonType.accelCruise and c.hudControl.setSpeed > 0 and c.hudControl.setSpeed < 70 and not b.pressed:
        events.add(EventName.buttonEnable)
      if b.type == ButtonType.resumeCruise and c.hudControl.setSpeed > 0 and c.hudControl.setSpeed < 70 and not b.pressed:
        events.add(EventName.buttonEnable)
      if b.type == ButtonType.decelCruise and not b.pressed:
        events.add(EventName.buttonEnable)
      # do disable on button down
      if b.type == ButtonType.cancel and b.pressed:
        events.add(EventName.buttonCancel)

    ret.events = events.to_msg()

    # copy back carState packet to CS
    self.CS.out = ret.as_reader()

    return self.CS.out

    events = self.create_common_events(ret, pcm_enable=False)

    if ret.vEgo < self.CP.minEnableSpeed and self.CS.pcm_acc_status != AccState.ACTIVE:
      events.add(EventName.belowEngageSpeed)
    if ret.cruiseState.standstill:
      events.add(EventName.resumeRequired)

    # autohold on ui icon
    if self.CS.autoHoldActivated == True:
      ret.autoHoldActivated = 1

    if self.CS.autoHoldActivated == False:
      ret.autoHoldActivated = 0

    # handle button presses
    for b in ret.buttonEvents:
      # do enable on both accel(or resume) and decel buttons
      if b.type == ButtonType.accelCruise and c.hudControl.setSpeed > 0 and c.hudControl.setSpeed < 70 and not b.pressed:
        events.add(EventName.buttonEnable)
      if b.type == ButtonType.resumeCruise and c.hudControl.setSpeed > 0 and c.hudControl.setSpeed < 70 and not b.pressed:
        events.add(EventName.buttonEnable)
      if b.type == ButtonType.decelCruise and not b.pressed:
        events.add(EventName.buttonEnable)
      # do disable on button down
      if b.type == ButtonType.cancel and b.pressed:
        events.add(EventName.buttonCancel)

    ret.events = events.to_msg()

    # copy back carState packet to CS
    self.CS.out = ret.as_reader()

    return self.CS.out

  def apply(self, c, controls):
    cruiseControl = c.cruiseControl
    pcm_cancel_cmd = cruiseControl.cancel

    # For Openpilot, "enabled" includes pre-enable.
    # In GM, PCM faults out if ACC command overlaps user gas.
    pause_long_on_gas_press = c.enabled and self.CS.gasPressed and not self.CS.out.brake > 0. and not self.disengage_on_gas
    self.CS.pause_long_on_gas_press = pause_long_on_gas_press
    enabled = c.enabled or self.CS.pause_long_on_gas_press

    ret = self.CC.update(c, self.CS, enabled, controls)

    # Release Auto Hold and creep smoothly when regenpaddle pressed
    if (self.CS.regenPaddlePressed or (self.CS.brakePressVal > 9.0 and self.CS.prev_brakePressVal < self.CS.brakePressVal)) and self.CS.autoHold:
      self.CS.autoHoldActive = False
      self.CS.autoholdBrakeStart = False

    if self.CS.autoHold and not self.CS.autoHoldActive and not self.CS.regenPaddlePressed:
      if self.CS.out.vEgo > 0.02:
        self.CS.autoHoldActive = True
      elif self.CS.out.vEgo < 0.01 and self.CS.out.brakePressed:
        self.CS.autoHoldActive = True
    return ret
