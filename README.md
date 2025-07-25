Fire Extinguisher Robot Using Arduino Uno
Overview
The Fire Extinguisher Robot is an autonomous system designed to detect and extinguish small fires using an Arduino Uno. This project leverages flame sensors, motorized movement, and an active suppression mechanism (fan, water, or CO₂ pump) to target fire sources. It is particularly suited for educational use, robotics demonstrations, and small-scale safety simulations.

Key Features
Flame detection: Locates fires using multiple flame sensors.

Directional movement: Navigates toward detected fire sources.

Automatic suppression: Activates a fan or pump for extinguishing the fire.

Status LED: Provides real-time fire detection status.

Autonomous operation: Functions without human intervention after setup.

Components Used
Component	Quantity
Arduino Uno	1
Flame Sensor Module	2–3
L298N Motor Driver	1
DC Motors with Wheels	2
Servo Motor / Pump	1
Fan / Water Tank (Optional)	1
12V Battery Pack	1
Chassis	1
Jumper Wires	Several
Breadboard (Optional)	1
LED (Status Indicator)	1
Working Principle
Detection: Flame sensors identify the presence and direction of fire.

Navigation: The robot uses its wheels and motor driver to move toward the fire, guided by sensor input.

Extinguishing: Upon approaching the fire, a fan, water sprayer, or pump is activated to suppress the flame.

Feedback: The status LED indicates detection and suppression status.

Instructions: How to Run
Assemble the hardware on the chassis according to the wiring diagram (not included here; refer to the project documentation).

Connect sensors, motors, and actuators to the Arduino Uno and the motor driver.

Upload the Arduino code using the Arduino IDE.

Power the robot with a 12V battery or via USB.

Test the setup: Place a small, controlled flame such as a candle nearby. Observe the robot as it detects, approaches, and attempts to extinguish the fire.

Safety Note
The robot should only be used on small, controlled fires (like candles).

Do not use it for large or hazardous fires.

Always conduct tests in a controlled environment and keep a real fire extinguisher nearby.

References
Arduino Flame Sensor Datasheet

L298N Motor Driver Guide

Arduino Uno Official Documentation

Project by Umesh Chandra Punati (B.Tech IoT with AIML – KL University).
