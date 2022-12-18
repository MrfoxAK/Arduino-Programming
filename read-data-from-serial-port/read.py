import serial
from serial import Serial
import keyboard
# # while True:
ser = serial.Serial("COM8",9600)
while True:
     data = ser.readline(1000)
     print(data)
     Data = str(data)
     with open("t.txt","w") as f:
          f.write(Data)

# print(data)
# ser = serial.Serial(port="COM8",baudrate="9600",bytesize=8,timeout=2,stopbits=serial.STOPBITS_ONE)
# data = ser.readline(1000)


# while True:

#      if keyboard.is_pressed('q'):
#           print("Quit?")
#           break


# ser.close()













