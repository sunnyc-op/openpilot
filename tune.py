from selfdrive.kegman_kans_conf import kegman_kans_conf
import subprocess
import os
BASEDIR = os.path.abspath(os.path.join(os.path.dirname(os.path.realpath(__file__)), "../"))

# letters stolen from here: http://www.stuffaboutcode.com/2013/08/raspberry-pi-minecraft-twitter.html
letters = {"a": ["###", "# #", "###", "# #", "# #"], "b": ["###", "# #", "###", "# #", "###"],
           "c": ["###", "#", "#", "#", "###"], "d": ["##", "# #", "# #", "# #", "##"],
           "e": ["###", "#", "###", "#", "###"], "f": ["###", "#", "###", "#", "#"],
           "g": ["###", "# #", "###", "  #", "###"], "h": ["# #", "# #", "###", "# #", "# #"],
           "i": ["###", " #", " #", " #", "###"], "j": ["###", " #", " #", " #", "##"],
           "k": ["# #", "##", "#", "##", "# #"], "l": ["#", "#", "#", "#", "###"],
           "m": ["# #", "###", "###", "# #", "# #"], "n": ["###", "# #", "# #", "# #", "# #"],
           "o": ["###", "# #", "# #", "# #", "###"], "p": ["###", "# #", "###", "#", "#"],
           "q": ["###", "# #", "###", "  #", "  #"], "r": ["###", "# #", "##", "# #", "# #"],
           "s": ["###", "#", "###", "  #", "###"], "t": ["###", " #", " #", " #", " #"],
           "u": ["# #", "# #", "# #", "# #", "###"], "v": ["# #", "# #", "# #", "# #", " #"],
           "w": ["# #", "# #", "# #", "###", "###"], "x": ["# #", " #", " #", " #", "# #"],
           "y": ["# #", "# #", "###", "  #", "###"], "z": ["###", "  #", " #", "#", "###"], " ": [" "],
           "1": [" #", "##", " #", " #", "###"], "2": ["###", "  #", "###", "#", "###"],
           "3": ["###", "  #", "###", "  #", "###"], "4": ["#", "#", "# #", "###", "  #"],
           "5": ["###", "#", "###", "  #", "###"], "6": ["###", "#", "###", "# #", "###"],
           "7": ["###", "  # ", " #", " #", "#"], "8": ["###", "# #", "###", "# #", "###"],
           "9": ["###", "# #", "###", "  #", "###"], "0": ["###", "# #", "# #", "# #", "###"],
           "!": [" # ", " # ", " # ", "   ", " # "], "?": ["###", "  #", " ##", "   ", " # "],
           ".": ["   ", "   ", "   ", "   ", " # "], "]": ["   ", "   ", "   ", "  #", " # "],
           "/": ["  #", "  #", " # ", "# ", "# "], ":": ["   ", " # ", "   ", " # ", "   "],
           "@": ["###", "# #", "## ", "#  ", "###"], "'": [" # ", " # ", "   ", "   ", "   "],
           "#": [" # ", "###", " # ", "###", " # "], "-": ["  ", "  ", "###", "   ", "   "]}


def print_letters(text):
    bigletters = []
    for i in text:
        bigletters.append(letters.get(i.lower(),letters[' ']))
    output = ['']*5
    for i in range(5):
        for j in bigletters:
            temp = ' '
            try:
                temp = j[i]
            except:
                pass
            temp += ' '*(5-len(temp))
            temp = temp.replace(' ',' ')
            temp = temp.replace('#','@')
            output[i] += temp
    return '\n'.join(output)
import sys, termios, tty, os, time

def getch():
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setraw(sys.stdin.fileno())
        ch = sys.stdin.read(1)

    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return ch

button_delay = 0.1

kegman_kans = kegman_kans_conf()
kegman_kans.conf['tuneGernby'] = "1"
param = ["Kp", "Ki", "Kf", "CAMERA_SPEED_FACTOR", \
         "steerLimitTimer", "deadzone", "STOPPING_DISTANCE"]

j = 0
while True:
  print("")
  print(print_letters(param[j][0:14]))
  print("")
  print(print_letters(kegman_kans.conf[param[j]]))
  print("")
  print ("1,2,3,4,5,6,7 to incr 1.0,0.1,0.01,0.001,0.0001,0.00001, 0.000001")
  print ("q,w,e,r,t,y,u to decr 1.0,0.1,0.01,0.001,0.0001,0.00001, 0.000001")
  print ("a / s / d to make the value 0 / 1 / 2")
  print ("press SPACE / m for next /prev parameter")
  print ("press z to quit")

  char = getch()
  write_json = False

  if (char == "7"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) + 0.000001),6))
    write_json = True

  if (char == "6"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) + 0.00001),6))
    write_json = True

  if (char == "5"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) + 0.0001),6))
    write_json = True

  if (char == "4"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) + 0.001),6))
    write_json = True

  elif (char == "3"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) + 0.01),6))
    write_json = True

  elif (char == "2"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) + 0.1),6))
    write_json = True

  elif (char == "1"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) + 1.0),6))
    write_json = True

  elif (char == "q"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) - 1.0),6))
    write_json = True

  elif (char == "w"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) - 0.1),6))
    write_json = True

  elif (char == "e"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) - 0.01),6))
    write_json = True

  elif (char == "r"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) - 0.001),6))
    write_json = True

  elif (char == "t"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) - 0.0001),6))
    write_json = True

  if (char == "y"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) - 0.00001),6))
    write_json = True

  if (char == "u"):
    kegman_kans.conf[param[j]] = str(round((float(kegman_kans.conf[param[j]]) - 0.000001),6))
    write_json = True

  elif (char == "a"):
    kegman_kans.conf[param[j]] = "0"
    write_json = True

  elif (char == "s"):
    kegman_kans.conf[param[j]] = "1"
    write_json = True

  elif (char == "d"):
    kegman_kans.conf[param[j]] = "2"
    write_json = True

  elif (char == " "):
    if j < len(param) - 1:
      j = j + 1
    else:
      j = 0

  elif (char == "m"):
    if j > 0:
      j = j - 1
    else:
      j = len(param) - 1

  elif (char == "z"):
    sys.exit(0)

  if float(kegman_kans.conf['tuneGernby']) != 1 and float(kegman_kans.conf['tuneGernby']) != 0:
    kegman_kans.conf['tuneGernby'] = "1"

  if float(kegman_kans.conf['Kp']) < 0 and float(kegman_kans.conf['Kp']) != -1:
    kegman_kans.conf['Kp'] = "0"

  if float(kegman_kans.conf['Kp']) > 1:
    kegman_kans.conf['Kp'] = "1"

  if float(kegman_kans.conf['Ki']) < 0 and float(kegman_kans.conf['Ki']) != -1:
    kegman_kans.conf['Ki'] = "0"

  if float(kegman_kans.conf['Ki']) > 1:
    kegman_kans.conf['Ki'] = "1"

  if float(kegman_kans.conf['Kf']) < 0 and float(kegman_kans.conf['Kf']) != -1:
    kegman_kans.conf['Kf'] = "0"

  if float(kegman_kans.conf['Kf']) > 1.2:
    kegman_kans.conf['Kf'] = "1.2"

  kegman_kans.conf['Kf'] = str("{:.6f}".format(float(kegman_kans.conf['Kf'])))

  if float(kegman_kans.conf['steerLimitTimer']) < 0.1 and float(kegman_kans.conf['steerLimitTimer']) != -1:
    kegman_kans.conf['steerLimitTimer'] = "0.1"

  if float(kegman_kans.conf['steerLimitTimer']) > 7:
    kegman_kans.conf['steerLimitTimer'] = "7"

  if float(kegman_kans.conf['deadzone']) < 0.01 and float(kegman_kans.conf['deadzone']) != -1:
    kegman_kans.conf['deadzone'] = "0.0"

  if float(kegman_kans.conf['deadzone']) > 1:
    kegman_kans.conf['deadzone'] = "1.0"

  if kegman_kans.conf['liveParams'] != "1" and kegman_kans.conf['liveParams'] != "0":
    kegman_kans.conf['liveParams'] = "1"

  if float(kegman_kans.conf['STOPPING_DISTANCE']) < 0.1 and float(kegman_kans.conf['STOPPING_DISTANCE']) != -1:
    kegman_kans.conf['STOPPING_DISTANCE'] = "0.1"

  if float(kegman_kans.conf['STOPPING_DISTANCE']) > 6:
    kegman_kans.conf['STOPPING_DISTANCE'] = "6"

  if float(kegman_kans.conf['CAMERA_SPEED_FACTOR']) < 0.1 and float(kegman_kans.conf['CAMERA_SPEED_FACTOR']) != -1:
    kegman_kans.conf['CAMERA_SPEED_FACTOR'] = "0.1"

  if float(kegman_kans.conf['CAMERA_SPEED_FACTOR']) > 1.5:
    kegman_kans.conf['CAMERA_SPEED_FACTOR'] = "1.5"

  if write_json:
    kegman_kans.write_config(kegman_kans.conf)

  time.sleep(button_delay)