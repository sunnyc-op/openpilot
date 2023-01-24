from cereal import car
from common.filter_simple import FirstOrderFilter
from common.numpy_fast import mean, interp
from common.realtime import DT_CTRL
from common.conversions import Conversions as CV
from opendbc.can.can_define import CANDefine
from opendbc.can.parser import CANParser
from selfdrive.car.interfaces import CarStateBase
from selfdrive.car.gm.values import DBC, CAR, AccState, CanBus, STEER_THRESHOLD, CruiseButtons
from common.params import Params
import cereal.messaging as messaging

from selfdrive.kegman_kans_conf import kegman_kans_conf
kegman_kans = kegman_kans_conf()

class CarState(CarStateBase):
  def __init__(self, CP):
    super().__init__(CP)
    can_define = CANDefine(DBC[CP.carFingerprint]["pt"])

    self.leftBlinker = False
    self.rightBlinker = False
    self.shifter_values = can_define.dv["ECMPRDNL"]["PRNDL"]
    self.lka_steering_cmd_counter = 0 # GM: EPS fault workaround (#22404)

    self.a_ego_filtered_rc = 1.0
    self.a_ego_filtered = FirstOrderFilter(0.0, self.a_ego_filtered_rc, DT_CTRL)

    self.gas_pressed = False
    self.cruiseState_enabled = False
    self.cruise_buttons = False
    self.prev_cruise_buttons = False
    self.vEgo = 0

    #3Bar Distance
    self.prev_distance_button = 0
    self.prev_lka_button = 0
    self.lka_button = 0
    self.distance_button = 0
    self.follow_level = 2
    self.lkMode = True
    #bellow 5lines for Autohold
    self.autoHold = False
    self.autoHoldActive = False
    self.autoHoldActivated = False
    self.regenPaddlePressed = False
    self.cruiseMain = False
    #brake autohold
    self.autoholdBrakeStart = False
    self.brakePressVal = 0
    self.prev_brakePressVal = 0
    #Engine Rpm
    self.engineRPM = 0

    self.use_cluster_speed = Params().get_bool('UseClusterSpeed')
    self.long_control_enabled = Params().get_bool('LongControlEnabled')
    self.is_metric = False
    self.pause_long_on_gas_press = False
    self.gasPressed = False

    # lead_distance and auto resume
    self.cruiseState_resumeButton = False
    self.lead_distance = 0
    self.lead_speed = 0
    self.sm = messaging.SubMaster(['radarState'])
    self.buttons_counter = 0


  def update(self, pt_cp, loopback_cp, ch_cp): # line for brake light & GM: EPS fault workaround (#22404)
    # lead_distance
    self.sm.update(0)
    if self.sm.updated['radarState']:
      self.lead_distance = 0.0
      self.lead_speed = 0.0
      lead = self.sm['radarState'].leadOne
      if lead is not None:
        self.lead_distance = lead.dRel
        self.lead_speed = lead.vLead

    ret = car.CarState.new_message()
    self.prev_cruise_buttons = self.cruise_buttons
    self.cruise_buttons = pt_cp.vl["ASCMSteeringButton"]["ACCButtons"]
    self.buttons_counter = pt_cp.vl["ASCMSteeringButton"]["RollingCounter"]
    self.prev_left_blinker = self.leftBlinker
    self.prev_right_blinker = self.rightBlinker

    self.is_metric = Params().get_bool("IsMetric")
    self.speed_conv_to_ms = CV.KPH_TO_MS * 1.609344 if self.is_metric else CV.MPH_TO_MS

    # 4 lines for 3Bar Distance
    self.prev_lka_button = self.lka_button
    self.lka_button = pt_cp.vl["ASCMSteeringButton"]["LKAButton"]
    self.prev_distance_button = self.distance_button
    self.distance_button = pt_cp.vl["ASCMSteeringButton"]["DistanceButton"]

    cluSpeed = pt_cp.vl["ECMVehicleSpeed"]["VehicleSpeed"]
    self.v_Ego = pt_cp.vl["ECMVehicleSpeed"]["VehicleSpeed"]

    ret.cluSpeedMs = cluSpeed * self.speed_conv_to_ms


    ret.wheelSpeeds = self.get_wheel_speeds(
      pt_cp.vl["EBCMWheelSpdFront"]["FLWheelSpd"],
      pt_cp.vl["EBCMWheelSpdFront"]["FRWheelSpd"],
      pt_cp.vl["EBCMWheelSpdRear"]["RLWheelSpd"],
      pt_cp.vl["EBCMWheelSpdRear"]["RRWheelSpd"],
    )

    vEgoRawClu = cluSpeed * self.speed_conv_to_ms
    vEgoClu, aEgoClu = self.update_clu_speed_kf(vEgoRawClu)

    vEgoRawWheel = (ret.wheelSpeeds.fl + ret.wheelSpeeds.fr + ret.wheelSpeeds.rl + ret.wheelSpeeds.rr) / 4.
    vEgoRawWheel = interp(vEgoRawWheel, [0., 10.], [(vEgoRawWheel + vEgoRawClu) / 2., vEgoRawWheel])
    vEgoWheel, aEgoWheel = self.update_speed_kf(vEgoRawWheel)

    if self.use_cluster_speed:
      ret.vEgoRaw = vEgoRawClu
      ret.vEgo = vEgoClu
      ret.aEgo = aEgoClu
    else:
      ret.vEgoRaw = vEgoRawWheel
      ret.vEgo = vEgoWheel
      ret.aEgo = aEgoWheel

    ret.vCluRatio = (vEgoWheel / vEgoClu) if (vEgoClu > 3. and vEgoWheel > 3.) else 1.0

    # ret.vEgoRaw = mean([ret.wheelSpeeds.fl, ret.wheelSpeeds.fr, ret.wheelSpeeds.rl, ret.wheelSpeeds.rr]) * (106./100.)
    # ret.vEgo, ret.aEgo = self.update_speed_kf(ret.vEgoRaw)
    if ret.vEgo < 3.0:
      self.a_ego_filtered = FirstOrderFilter(ret.aEgo, self.a_ego_filtered_rc, DT_CTRL)
    else:
      self.a_ego_filtered.update(ret.aEgo)

    self.vEgo = ret.vEgo
    ret.standstill = ret.vEgoRaw < 0.1

    ret.gearShifter = self.parse_gear_shifter(self.shifter_values.get(pt_cp.vl["ECMPRDNL"]["PRNDL"], None))
    #This brake position value disengages stock ACC, use it to avoid control mismatch.
    ret.brake = pt_cp.vl["ECMAcceleratorPos"]["BrakePedalPos"] / 0xd0
    # Brake pedal's potentiometer returns near-zero reading even when pedal is not pressed.
    ret.brakePressed = pt_cp.vl["ECMAcceleratorPos"]["BrakePedalPos"] >= 8

    # brake autohold
    self.prev_brakePressVal = self.brakePressVal
    self.brakePressVal = pt_cp.vl["ECMAcceleratorPos"]["BrakePedalPos"]

    if ret.brake < 10/0xd0:
      ret.brake = 0.

    ret.gas = pt_cp.vl["AcceleratorPedal2"]["AcceleratorPedal2"] / 254.
    ret.gasPressed = ret.gas > 1e-5
    self.gasPressed = ret.gasPressed # disengage on gas

    ret.steeringAngleDeg = pt_cp.vl["PSCMSteeringAngle"]["SteeringWheelAngle"]
    ret.steeringRateDeg = pt_cp.vl["PSCMSteeringAngle"]["SteeringWheelRate"]
    ret.yawRate = pt_cp.vl["EBCMVehicleDynamic"]["YawRate"]
    ret.steeringTorque = pt_cp.vl["PSCMStatus"]["LKADriverAppldTrq"]
    ret.steeringTorqueEps = pt_cp.vl["PSCMStatus"]["LKATorqueDelivered"]
    ret.steeringPressed = abs(ret.steeringTorque) > STEER_THRESHOLD
    self.lka_steering_cmd_counter = loopback_cp.vl["ASCMLKASteeringCmd"]["RollingCounter"] #GM: EPS fault workaround (#22404)

    # 0 inactive, 1 active, 2 temporarily limited, 3 failed
    self.lkas_status = pt_cp.vl["PSCMStatus"]["LKATorqueDeliveredStatus"]
    ret.steerFaultTemporary = self.lkas_status == 2
    ret.steerFaultPermanent = self.lkas_status == 3

    # 1 - open, 0 - closed
    ret.doorOpen = (pt_cp.vl["BCMDoorBeltStatus"]["FrontLeftDoor"] == 1 or
                    pt_cp.vl["BCMDoorBeltStatus"]["FrontRightDoor"] == 1 or
                    pt_cp.vl["BCMDoorBeltStatus"]["RearLeftDoor"] == 1 or
                    pt_cp.vl["BCMDoorBeltStatus"]["RearRightDoor"] == 1)

    # 1 - latched
    ret.seatbeltUnlatched = pt_cp.vl["BCMDoorBeltStatus"]["LeftSeatBelt"] == 0
    ret.leftBlinker = pt_cp.vl["BCMTurnSignals"]["TurnSignals"] == 1
    ret.rightBlinker = pt_cp.vl["BCMTurnSignals"]["TurnSignals"] == 2
    ret.parkingBrake = pt_cp.vl["EPBStatus"]["EPBClosed"] == 1
    ret.cruiseState.available = bool(pt_cp.vl["ECMEngineStatus"]["CruiseMainOn"])# != 0
    ret.espDisabled = pt_cp.vl["ESPStatus"]["TractionControlOn"] != 1
    self.pcm_acc_status = pt_cp.vl["AcceleratorPedal2"]["CruiseState"]

    ret.brakePressed = ret.brake > 1e-5

    # Regen braking is braking
    if self.car_fingerprint == CAR.VOLT:
      self.regenPaddlePressed = bool(pt_cp.vl["EBCMRegenPaddle"]["RegenPaddle"])
      ret.brakePressed = ret.brakePressed or self.regenPaddlePressed

    # cruise state
    self.gas_pressed = ret.gasPressed
    ret.cruiseState.enabled = self.pcm_acc_status != AccState.OFF
    ret.cruiseState.standstill = self.pcm_acc_status != AccState.STANDSTILL
    ret.cruiseState.enabledAcc = ret.cruiseState.enabled
    self.cruiseState_enabled = ret.cruiseState.enabled
    ret.cruiseState.resumeButton = bool(pt_cp.vl["ASCMActiveCruiseControlStatus"]["ACCResumeButton"])
    self.cruiseState_resumeButton = ret.cruiseState.resumeButton

    # bellow 1 line for AutoHold
    self.cruiseMain = ret.cruiseState.available

    if ret.cruiseState.enabled:
      ret.cruiseState.speed = pt_cp.vl["ASCMActiveCruiseControlStatus"]["ACCSpeedSetpoint"] * CV.MPH_TO_MS
    else:
      ret.cruiseState.speed = 0

    #Cruise Gap
    ret.cruiseGap = self.follow_level

    self.engineRPM = pt_cp.vl["ECMEngineStatus"]["EngineRPM"]

    # bellow line for Brake Light
    ret.brakeLights = ch_cp.vl["EBCMFrictionBrakeStatus"]["FrictionBrakePressure"] != 0 or ret.brakePressed

    # bellow Lines are for Autohold
    if kegman_kans.conf['AutoHold'] == "1":
      self.autoHold = True
    else:
      self.autoHold = False
    # autohold on ui icon
    if self.CP.enableAutoHold:
      ret.autoHoldActivated = self.autoHoldActivated

    return ret

  def get_follow_level(self):
    return self.follow_level


  @staticmethod
  def get_can_parser(CP):
    # this function generates lists for signal, messages and initial values
    signals = [
      # sig_name, sig_address
      ("BrakePedalPos", "ECMAcceleratorPos"),
      ("FrontLeftDoor", "BCMDoorBeltStatus"),
      ("FrontRightDoor", "BCMDoorBeltStatus"),
      ("RearLeftDoor", "BCMDoorBeltStatus"),
      ("RearRightDoor", "BCMDoorBeltStatus"),
      ("LeftSeatBelt", "BCMDoorBeltStatus"),
      ("RightSeatBelt", "BCMDoorBeltStatus"),
      ("TurnSignals", "BCMTurnSignals"),
      ("AcceleratorPedal2", "AcceleratorPedal2"),
      ("CruiseState", "AcceleratorPedal2"),
      ("ACCButtons", "ASCMSteeringButton"),
      ("RollingCounter", "ASCMSteeringButton"),
      ("SteeringWheelAngle", "PSCMSteeringAngle"),
      ("SteeringWheelRate", "PSCMSteeringAngle"),
      ("FLWheelSpd", "EBCMWheelSpdFront"),
      ("FRWheelSpd", "EBCMWheelSpdFront"),
      ("RLWheelSpd", "EBCMWheelSpdRear"),
      ("RRWheelSpd", "EBCMWheelSpdRear"),
      ("PRNDL", "ECMPRDNL"),
      ("LKADriverAppldTrq", "PSCMStatus"),
      ("LKATorqueDelivered", "PSCMStatus"),
      ("LKATorqueDeliveredStatus", "PSCMStatus"),
      ("TractionControlOn", "ESPStatus"),
      ("EPBClosed", "EPBStatus"),
      ("CruiseMainOn", "ECMEngineStatus"),
      ("Brake_Pressed", "ECMEngineStatus"),
      ("LKAButton", "ASCMSteeringButton"),
      ("DistanceButton", "ASCMSteeringButton"),
      ("LKATorqueDelivered", "PSCMStatus"),
      ("EngineRPM", "ECMEngineStatus"),
      ("VehicleSpeed", "ECMVehicleSpeed"),
      ("BrakePedalPos", "ECMAcceleratorPos"),
      ("ACCGapLevel", "ASCMActiveCruiseControlStatus"),
      ("ACCSpeedSetpoint", "ASCMActiveCruiseControlStatus"),
      ("YawRate", "EBCMVehicleDynamic"),
      ("ACCResumeButton", "ASCMActiveCruiseControlStatus"),
    ]

    checks = []

    if CP.carFingerprint == CAR.VOLT:
      signals.append(("RegenPaddle", "EBCMRegenPaddle"))
      checks.append(("EBCMRegenPaddle", 50))

    return CANParser(DBC[CP.carFingerprint]["pt"], signals, checks, CanBus.POWERTRAIN, enforce_checks=False)


# GM: EPS fault workaround (#22404)
  @staticmethod
  def get_loopback_can_parser(CP):
    signals = [
      ("RollingCounter", "ASCMLKASteeringCmd"),
    ]
    checks = []
    return CANParser(DBC[CP.carFingerprint]["pt"], signals, checks, CanBus.LOOPBACK, enforce_checks=False)

## all bellows are for Brake Light
  @staticmethod
  def get_chassis_can_parser(CP):
    # this function generates lists for signal, messages and initial values
    signals = [
      # sig_name, sig_address, default
      ("FrictionBrakePressure", "EBCMFrictionBrakeStatus"),
    ]
    checks = []
    return CANParser(DBC[CP.carFingerprint]["chassis"], signals, checks, CanBus.CHASSIS, enforce_checks=False)
