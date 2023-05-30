# PC-IR-remote
Program that takes input from an IR TV remote and translates it into windows media functions using an Arduino and a Python program.


This was specifically designed for use with an Arduino Uno along with an IR receiver to be used with a Sony BD RMT-VB200U IR remote. 
The Arduino takes input from the IR remote, then translates it into a message on a serial monitor. With the Arduino connected to a Windows PC through a USB cable and the Python program running, the Python code reads the messages coming through the serial monitor, and then activates a corresponding function 
on the Windows computer, whether it be changing the volume, playing/pausing media, moving the mouse cursor, etc. 

Included are two stl files for 3d printing a simple enclosure for an Arduino Uno and IR sensor, also created by me. 

This code was entirely written by me, with slight help from ChatGPT pushing me in the right direction.  
