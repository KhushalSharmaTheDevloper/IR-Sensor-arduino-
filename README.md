<h1>IR Sensor</h1>
<h2>Used To Detect Door</h2>

<p>This project involves creating a simple door status monitor using an Arduino Uno, an IR sensor, and an LED. The purpose of this project is to detect whether a door is open or closed and display the status on the serial monitor.

Components:
Arduino Uno,
IR Sensor,
LED,
Resistor,
Connecting wires,
Breadboard</p>

<h2>Functionality:</h2>
<p>IR Sensor Detection:
The IR sensor is connected to digital pin 7 and is used to detect the presence or absence of an object (e.g., the door).
LED Indicator:
An LED connected to digital pin 8 acts as a visual indicator for the door's status.
Serial Output:
The Arduino reads the state of the IR sensor.
If the sensor detects an object (value 1), the LED turns off and "Door Close." is printed on the serial monitor.
If the sensor does not detect an object (value 0), the LED turns on and "Door Open." is printed on the serial monitor.</p>
