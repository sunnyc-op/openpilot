#!/usr/bin/bash

GET_PROP_ATZ=$(getprop persist.sys.timezone)
if [ -f "/data/params/d/OPKRTimeZone" ]; then
    GET_PROP_STZ=$(cat /data/params/d/OPKRTimeZone)
fi

if [ "$GET_PROP_STZ" != "" ] && [ "$GET_PROP_ATZ" != "$GET_PROP_STZ" ]; then
    setprop persist.sys.timezone $GET_PROP_STZ
fi

mount -o rw,remount /system
export PASSIVE="0"
chmod 700 ./launch_chffrplus.sh
sed -i -e 's/\r$//' ./launch_chffrplus.sh
chmod 700 ./unix.sh
sed -i -e 's/\r$//' ./unix.sh
./unix.sh
./launch_chffrplus.sh