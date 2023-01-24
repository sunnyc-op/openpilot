#!/usr/bin/bash

if [ ! -f "./installer/boot_finish" ]; then
  echo "Installing fonts..."
  mount -o rw,remount /system
  cp -f ./installer/fonts/NanumGothic* /system/fonts/
  cp -f ./installer/fonts/opensans_* ./selfdrive/assets/fonts/
  cp -f ./installer/fonts/fonts.xml /system/etc/fonts.xml

  cp -f ./installer/kegman_kans.json /data/kegman_kans.json

  chmod 644 /system/etc/fonts.xml
  chmod 644 /system/fonts/NanumGothic*
  cp -f ./installer/bootanimation.zip /system/media/
  cp -f ./installer/spinner ./selfdrive/ui/qt/
  sed -i 's/self._AWARENESS_TIME = 30/self._AWARENESS_TIME = 10800/' ./selfdrive/monitoring/driver_monitor.py
  sed -i 's/self._DISTRACTED_TIME = 11/self._DISTRACTED_TIME = 7200/' ./selfdrive/monitoring/driver_monitor.py
  sed -i 's/self.face_detected = False/self.face_detected = True/' ./selfdrive/monitoring/driver_monitor.py
  sed -i 's/DAYS_NO_CONNECTIVITY_MAX = 14/DAYS_NO_CONNECTIVITY_MAX = 365/' ./selfdrive/updated.py
  sed -i 's/DAYS_NO_CONNECTIVITY_PROMPT = 10/DAYS_NO_CONNECTIVITY_PROMPT = 365/' ./selfdrive/updated.py

  chmod 700 ./t.sh
  chmod 700 ./unix.sh
  chmod 700 ./tune.py
  sed -i -e 's/\r$//' ./unix.sh
  sed -i -e 's/\r$//' ./selfdrive/manager/*.py
  sed -i -e 's/\r$//' ./launch_env.sh
  sed -i -e 's/\r$//' ./launch_openpilot.sh
  sed -i -e 's/\r$//' ./Jenkinsfile
  sed -i -e 's/\r$//' ./SConstruct
  sed -i -e 's/\r$//' ./t.sh
  sed -i -e 's/\r$//' ./tune.py

  chmod 744 /system/media/bootanimation.zip
  chmod 700 ./selfdrive/ui/qt/spinner
  chmod 700 ./selfdrive/ui/soundd/soundd
  chmod 700 ./selfdrive/ui/soundd/sound.*
  chmod 700 ./scripts/*.sh
  touch ./installer/boot_finish

elif [ "$(getprop persist.sys.locale)" != "ko-KR" ]; then

  setprop persist.sys.locale ko-KR
  setprop persist.sys.language ko
  setprop persist.sys.country KR
  setprop persist.sys.timezone Asia/Seoul

  sleep 2
  reboot
else
  chmod 644 /data/openpilot/installer/boot_finish
  mount -o ro,remount /system
fi

if [ -z "$BASEDIR" ]; then
  BASEDIR="/data/openpilot"
fi

source "$BASEDIR/launch_env.sh"

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"

function two_init {
  mount -o remount,rw /system
  if [ ! -f /ONEPLUS ] && ! $(grep -q "letv" /proc/cmdline); then
    cp -f "$BASEDIR/selfdrive/hardware/eon/update.zip" "/data/media/0/update.zip"
    sed -i -e 's#/dev/input/event1#/dev/input/event2#g' ~/.bash_profile
    touch /ONEPLUS
  else
    if [ ! -f /LEECO ]; then
      mount -o remount,rw /system
      touch /LEECO
      mount -o remount,r /system 
    fi
  fi
  neos=`cat /VERSION`
  if [ -f /ONEPLUS ] && [ $neos != 20 ] ; then
    mount -o remount,rw /system
    echo -n 20 > /VERSION
    mount -o remount,r /system
  fi

  # set IO scheduler
  setprop sys.io.scheduler noop
  for f in /sys/block/*/queue/scheduler; do
    echo noop > $f
  done

  # android gets two cores
  echo 0-1 > /dev/cpuset/background/cpus
  echo 0-1 > /dev/cpuset/system-background/cpus
  echo 0-1 > /dev/cpuset/foreground/cpus
  echo 0-1 > /dev/cpuset/foreground/boost/cpus
  echo 0-1 > /dev/cpuset/android/cpus

  # openpilot gets all the cores
  echo 0-3 > /dev/cpuset/app/cpus

  # mask off 2-3 from RPS and XPS - Receive/Transmit Packet Steering
  echo 3 | tee  /sys/class/net/*/queues/*/rps_cpus
  echo 3 | tee  /sys/class/net/*/queues/*/xps_cpus

  # *** set up governors ***

  # +50mW offroad, +500mW onroad for 30% more RAM bandwidth
  echo "performance" > /sys/class/devfreq/soc:qcom,cpubw/governor
  echo 1056000 > /sys/class/devfreq/soc:qcom,m4m/max_freq
  echo "performance" > /sys/class/devfreq/soc:qcom,m4m/governor

  # unclear if these help, but they don't seem to hurt
  echo "performance" > /sys/class/devfreq/soc:qcom,memlat-cpu0/governor
  echo "performance" > /sys/class/devfreq/soc:qcom,memlat-cpu2/governor

  # GPU
  echo "performance" > /sys/class/devfreq/b00000.qcom,kgsl-3d0/governor

  # /sys/class/devfreq/soc:qcom,mincpubw is the only one left at "powersave"
  # it seems to gain nothing but a wasted 500mW

  # *** set up IRQ affinities ***

  # Collect RIL and other possibly long-running I/O interrupts onto CPU 1
  echo 1 > /proc/irq/78/smp_affinity_list # qcom,smd-modem (LTE radio)
  echo 1 > /proc/irq/33/smp_affinity_list # ufshcd (flash storage)
  echo 1 > /proc/irq/35/smp_affinity_list # wifi (wlan_pci)
  echo 1 > /proc/irq/6/smp_affinity_list  # MDSS

  # USB traffic needs realtime handling on cpu 3
  [ -d "/proc/irq/733" ] && echo 3 > /proc/irq/733/smp_affinity_list
  if [ -f /ONEPLUS ]; then
    [ -d "/proc/irq/736" ] && echo 3 > /proc/irq/736/smp_affinity_list # USB for OP3T
  fi

  # GPU and camera get cpu 2
  CAM_IRQS="177 178 179 180 181 182 183 184 185 186 192"
  for irq in $CAM_IRQS; do
    echo 2 > /proc/irq/$irq/smp_affinity_list
  done
  echo 2 > /proc/irq/193/smp_affinity_list # GPU

  # give GPU threads RT priority
  for pid in $(pgrep "kgsl"); do
    chrt -f -p 52 $pid
  done

  # the flippening!
  LD_LIBRARY_PATH="" content insert --uri content://settings/system --bind name:s:user_rotation --bind value:i:1

  # disable bluetooth
  service call bluetooth_manager 8

  # wifi scan
  wpa_cli IFNAME=wlan0 SCAN

  # Check for NEOS update
  if [ -f /LEECO ] && [ $(< /VERSION) != "$REQUIRED_NEOS_VERSION" ]; then
    echo "Installing NEOS update"
    NEOS_PY="$DIR/selfdrive/hardware/eon/neos.py"
    MANIFEST="$DIR/selfdrive/hardware/eon/neos.json"
    $NEOS_PY --swap-if-ready $MANIFEST
    $DIR/selfdrive/hardware/eon/updater $NEOS_PY $MANIFEST
  fi

  # One-time fix for a subset of OP3T with gyro orientation offsets.
  # Remove and regenerate qcom sensor registry. Only done on OP3T mainboards.
  # Performed exactly once. The old registry is preserved just-in-case, and
  # doubles as a flag denoting we've already done the reset.
  if [ -f /ONEPLUS ] && [ ! -f "/persist/comma/op3t-sns-reg-backup" ]; then
    echo "Performing OP3T sensor registry reset"
    mv /persist/sensors/sns.reg /persist/comma/op3t-sns-reg-backup &&
      rm -f /persist/sensors/sensors_settings /persist/sensors/error_log /persist/sensors/gyro_sensitity_cal &&
      echo "restart" > /sys/kernel/debug/msm_subsys/slpi &&
      sleep 5  # Give Android sensor subsystem a moment to recover
  fi

  if [ ! -f "/data/ntune/common.json" ]; then
    mount -o remount,rw /system
    mkdir /data/ntune
    mount -o remount,r /system
  fi

  if [ ! -f "/data/ntune/lat_torque_v4.json" ]; then
    mount -o remount,rw /system
    cp /data/openpilot/ntune/lat_torque_v4.json /data/ntune/lat_torque_v4.json
    chmod 666 /data/ntune/lat_torque_v4.json
    mount -o remount,r /system
  fi

  if [ ! -f "/data/ntune/common.json" ]; then
    mount -o remount,rw /system
    cp /data/openpilot/ntune/common.json /data/ntune/common.json
    chmod 666 /data/ntune/common.json
    mount -o remount,r /system
  fi

  if [ ! -f "/data/ntune/scc.json" ]; then
    mount -o remount,rw /system
    cp /data/openpilot/ntune/scc.json /data/ntune/scc.json
    chmod 666 /data/ntune/scc.json
    mount -o remount,r /system
  fi

  if [ ! -f "/data/ntune/option.json" ]; then
    mount -o remount,rw /system
    cp /data/openpilot/ntune/option.json /data/ntune/option.json
    chmod 666 /data/ntune/option.json
    mount -o remount,r /system
  fi

  if [ ! -f "/data/ntune/lat_lqr.json" ]; then
    mount -o remount,rw /system
    cp /data/openpilot/ntune/lat_lqr.json /data/ntune/lat_lqr.json
    chmod 666 /data/ntune/lat_lqr.json
    mount -o remount,r /system
  fi
}

function tici_init {
  # wait longer for weston to come up
  if [ -f "$BASEDIR/prebuilt" ]; then
    sleep 3
  fi

  # TODO: move this to agnos
  sudo rm -f /data/etc/NetworkManager/system-connections/*.nmmeta

  # set success flag for current boot slot
  sudo abctl --set_success

  # Check if AGNOS update is required
  if [ $(< /VERSION) != "$AGNOS_VERSION" ]; then
    AGNOS_PY="$DIR/selfdrive/hardware/tici/agnos.py"
    MANIFEST="$DIR/selfdrive/hardware/tici/agnos.json"
    if $AGNOS_PY --verify $MANIFEST; then
      sudo reboot
    fi
    $DIR/selfdrive/hardware/tici/updater $AGNOS_PY $MANIFEST
  fi
}

function launch {
  # Remove orphaned git lock if it exists on boot
  [ -f "$DIR/.git/index.lock" ] && rm -f $DIR/.git/index.lock

  # Pull time from panda
  $DIR/selfdrive/boardd/set_time.py

  # Check to see if there's a valid overlay-based update available. Conditions
  # are as follows:
  #
  # 1. The BASEDIR init file has to exist, with a newer modtime than anything in
  #    the BASEDIR Git repo. This checks for local development work or the user
  #    switching branches/forks, which should not be overwritten.
  # 2. The FINALIZED consistent file has to exist, indicating there's an update
  #    that completed successfully and synced to disk.

  if [ -f "${BASEDIR}/.overlay_init" ]; then
    #find ${BASEDIR}/.git -newer ${BASEDIR}/.overlay_init | grep -q '.' 2> /dev/null
    #if [ $? -eq 0 ]; then
    #  echo "${BASEDIR} has been modified, skipping overlay update installation"
    #else
      if [ -f "${STAGING_ROOT}/finalized/.overlay_consistent" ]; then
        if [ ! -d /data/safe_staging/old_openpilot ]; then
          echo "Valid overlay update found, installing"
          LAUNCHER_LOCATION="${BASH_SOURCE[0]}"

          mv $BASEDIR /data/safe_staging/old_openpilot
          mv "${STAGING_ROOT}/finalized" $BASEDIR
          cd $BASEDIR

          echo "Restarting launch script ${LAUNCHER_LOCATION}"
          unset REQUIRED_NEOS_VERSION
          unset AGNOS_VERSION
          exec "${LAUNCHER_LOCATION}"
        else
          echo "openpilot backup found, not updating"
          # TODO: restore backup? This means the updater didn't start after swapping
        fi
      fi
  #  fi
  fi

  # handle pythonpath
  ln -sfn $(pwd) /data/pythonpath
  export PYTHONPATH="$PWD:$PWD/pyextra"

  # hardware specific init
  if [ -f /EON ]; then
    two_init
  elif [ -f /TICI ]; then
    tici_init
  fi

  # write tmux scrollback to a file
  tmux capture-pane -pq -S-1000 > /tmp/launch_log

  dongleid=`cat /data/params/d/DongleId`

  if [[ $dongleid == *"Unregistered"* ]]; then
    echo -en "000000" > /data/params/d/DongleId
  fi

  # start manager
  cd selfdrive/manager
  ./build.py && ./manager.py

  # if broken, keep on screen error
  while true; do sleep 1; done
}

launch
