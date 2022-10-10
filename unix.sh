#!/usr/bin/bash

  mount -o rw,remount /system

  chmod 700 ./t.sh
  chmod 700 ./tune.py
  chmod 700 ./scripts/*.sh
  chmod 700 ./launch_chffrplus.sh
  sed -i -e 's/\r$//' ./*.py
  sed -i -e 's/\r$//' ./selfdrive/*.py
  sed -i -e 's/\r$//' ./selfdrive/manager/*.py
  sed -i -e 's/\r$//' ./selfdrive/car/*.py
  sed -i -e 's/\r$//' ./selfdrive/ui/*.cc
  sed -i -e 's/\r$//' ./selfdrive/ui/*.h
  sed -i -e 's/\r$//' ./selfdrive/controls/*.py
  sed -i -e 's/\r$//' ./selfdrive/controls/lib/*.py
  sed -i -e 's/\r$//' ./selfdrive/locationd/models/*.py
  sed -i -e 's/\r$//' ./cereal/*.py
  sed -i -e 's/\r$//' ./cereal/*.capnp
  sed -i -e 's/\r$//' ./selfdrive/car/gm/*.py
  sed -i -e 's/\r$//' ./selfdrive/ui/qt/*.cc
  sed -i -e 's/\r$//' ./selfdrive/ui/qt/*.h
  sed -i -e 's/\r$//' ./selfdrive/ui/qt/offroad/*.cc
  sed -i -e 's/\r$//' ./selfdrive/ui/qt/widgets/*.cc
  sed -i -e 's/\r$//' ./selfdrive/ui/qt/offroad/*.h
  sed -i -e 's/\r$//' ./selfdrive/ui/qt/widgets/*.h
  sed -i -e 's/\r$//' ./selfdrive/ui/soundd/*.cc
  sed -i -e 's/\r$//' ./selfdrive/ui/soundd/*.h
  sed -i -e 's/\r$//' ./selfdrive/boardd/*.cc
  sed -i -e 's/\r$//' ./selfdrive/boardd/*.pyx
  sed -i -e 's/\r$//' ./selfdrive/boardd/*.h
  sed -i -e 's/\r$//' ./selfdrive/boardd/*.py
  sed -i -e 's/\r$//' ./selfdrive/camerad/cameras/*.h
  sed -i -e 's/\r$//' ./selfdrive/camerad/cameras/*.cc
  sed -i -e 's/\r$//' ./selfdrive/camerad/snapshot/*.py
  sed -i -e 's/\r$//' ./selfdrive/camerad/*.cc
  sed -i -e 's/\r$//' ./selfdrive/thermald/*.py
  sed -i -e 's/\r$//' ./selfdrive/athena/*.py
  sed -i -e 's/\r$//' ./scripts/*.sh
  sed -i -e 's/\r$//' ./common/*.py
  sed -i -e 's/\r$//' ./common/*.pyx
  sed -i -e 's/\r$//' ./launch_env.sh
  sed -i -e 's/\r$//' ./launch_openpilot.sh
  sed -i -e 's/\r$//' ./launch_chffrplus.sh
  sed -i -e 's/\r$//' ./Jenkinsfile
  sed -i -e 's/\r$//' ./SConstruct
  sed -i -e 's/\r$//' ./t.sh
  sed -i -e 's/\r$//' ./tune.py
