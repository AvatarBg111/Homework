from pynput.mouse import Button, Controller
import playsound

#//////////////////////////////////////////////////////
#playsound.playsound('BERLIN.mp3')
#i = int(input("Input something in an int form:"))
#print(i)
while 1:
  mouse = Controller()
  current_mouse_position = mouse.position
  print(current_mouse_position)