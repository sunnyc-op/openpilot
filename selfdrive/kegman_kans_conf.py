import json
import os

class kegman_kans_conf():
  def __init__(self, CP=None):
    self.conf = self.read_config()
    if CP is not None:
      self.init_config(CP)

  def init_config(self, CP):
    write_conf = False
    if self.conf['tuneGernby'] != "1":
      self.conf['tuneGernby'] = str(1)
      write_conf = True

    # only fetch Kp, Ki, Kf sR and sRC from interface.py if it's a PID controlled car
    if CP.lateralTuning.which() == 'pid':
      if self.conf['Kp'] == "-1":
        self.conf['Kp'] = str(round(CP.lateralTuning.pid.kpV[0],3))
        write_conf = True
      if self.conf['Ki'] == "-1":
        self.conf['Ki'] = str(round(CP.lateralTuning.pid.kiV[0],3))
        write_conf = True
      if self.conf['Kf'] == "-1":
        self.conf['Kf'] = str('{:f}'.format(CP.lateralTuning.pid.kf))
        write_conf = True

    if write_conf:
      self.write_config(self.config)

  def read_config(self):
    self.element_updated = False

    if os.path.isfile('/data/kegman_kans.json'):
      with open('/data/kegman_kans.json', 'r') as f:
        self.config = json.load(f)

      if "battPercOff" not in self.config:
        self.config.update({"battPercOff":"40"})
        self.config.update({"carVoltageMinEonShutdown":"12000"})
        self.element_updated = True

      if "tuneGernby" not in self.config:
        self.config.update({"tuneGernby":"1"})
        self.config.update({"Kp":"0.185"})
        self.config.update({"Ki":"0.085"})
        self.element_updated = True

      if "liveParams" not in self.config:
        self.config.update({"liveParams":"1"})
        self.element_updated = True

      if "STOPPING_DISTANCE" not in self.config:
        self.config.update({"STOPPING_DISTANCE":"5.0"})
        self.element_updated = True

      if "deadzone" not in self.config:
        self.config.update({"deadzone":"0.0"})
        self.element_updated = True
      # AutoHold
      if "AutoHold" not in self.config:
        self.config.update({"AutoHold":"1"})
        self.element_updated = True

      if "steerLimitTimer" not in self.config:
        self.config.update({"steerLimitTimer":"4.0"})
        self.element_updated = True

      if "CruiseDelta" not in self.config:
        self.config.update({"CruiseDelta":"5"})
        self.element_updated = True

      if "CruiseEnableMin" not in self.config:
        self.config.update({"CruiseEnableMin":"10"})
        self.element_updated = True

      if "epsModded" not in self.config:
        self.config.update({"epsModded":"0"})
        self.element_updated = True

      if "CAMERA_SPEED_FACTOR" not in self.config:
        self.config.update({"CAMERA_SPEED_FACTOR":"0.98"})
        self.element_updated = True

      if self.element_updated:
        print("updated")
        self.write_config(self.config)

    else:
      self.config = {"battChargeMin":"65", "battChargeMax":"85", \
         "battPercOff":"40", "carVoltageMinEonShutdown":"12000", \
         "steerLimitTimer":"4.0", "tuneGernby":"1", "AutoHold":"1", \
         "Kp":"0.185", "Ki":"0.095", "Kf":"1.00004", \
         "STOPPING_DISTANCE":"5.0", "CruiseDelta":"5", "CruiseEnableMin":"10", \
         "liveParams":"1", "deadzone":"0.0", \
         "epsModded": "0", "CAMERA_SPEED_FACTOR":"0.98"}

      self.write_config(self.config)
    return self.config

  def write_config(self, config):
    try:
      with open('/data/kegman_kans.json', 'w') as f:
        json.dump(self.config, f, indent=2, sort_keys=True)
        os.chmod("/data/kegman_kans.json", 0o764)
    except IOError:
      os.mkdir('/data')
      with open('/data/kegman_kans.json', 'w') as f:
        json.dump(self.config, f, indent=2, sort_keys=True)
        os.chmod("/data/kegman_kans.json", 0o764)
