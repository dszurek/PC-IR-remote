import serial
import keyboard
import mouse

serial_port = "COM3"
baud_rate = 9600

ser = serial.Serial(serial_port, baud_rate)

while True:
    if ser.in_waiting > 0:
        line = ser.readline().decode("utf-8").strip()
        if line == "PLAYPAUSE":
            keyboard.press_and_release("space")
        elif line == "RIGHT":
            mouse.move(50, 0, absolute=False, duration=0.2)
        elif line == "LEFT":
            mouse.move(-50, 0, absolute=False, duration=0.2)
        elif line == "UP":
            mouse.move(0, -50, absolute=False, duration=0.2)
        elif line == "DOWN":
            mouse.move(0, 50, absolute=False, duration=0.2)
        elif line == "VOLUP":
            keyboard.press_and_release("volume up")
        elif line == "VOLDOWN":
            keyboard.press_and_release("volume down")
        elif line == "HOME":
            keyboard.press_and_release("win")
        elif line == "OK":
            mouse.click("left")
