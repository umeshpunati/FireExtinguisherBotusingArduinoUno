# 🔥 Fire Extinguisher Robot using Arduino Uno

## 🚀 Overview

This project is a Fire Extinguisher Robot built using an Arduino Uno that autonomously detects and extinguishes fire. It uses flame sensors to detect fire and a servo/motor-based system to aim and activate a fire suppression mechanism (such as a fan or pump with water or CO2).

The robot is ideal for small-scale fire safety demonstrations or academic projects on automation, robotics, and embedded systems.

---

## 🧠 Features

- 🔥 Fire detection using flame sensors
- 🧭 Directional movement toward fire
- 🎯 Automatic fire suppression (fan or water pump)
- 💡 Real-time LED indicators
- 🔌 Operates autonomously with onboard sensors

---

## 🛠️ Components Used

| Component             | Quantity |
|----------------------|----------|
| Arduino Uno          | 1        |
| Flame Sensor Module  | 2-3      |
| L298N Motor Driver   | 1        |
| DC Motors with Wheels| 2        |
| Servo Motor / Pump   | 1        |
| Fan / Water tank (Optional) | 1        |
| 12V Battery Pack     | 1        |
| Chassis              | 1        |
| Jumper Wires         | Several  |
| Breadboard (Optional)| 1        |
| LED (Status Indicator)| 1       |

---

## ⚙️ Working Principle

1. **Detection**: Flame sensors detect the presence and direction of fire.
2. **Navigation**: The robot moves toward the fire using motor control based on sensor input.
3. **Extinguishing**: Once near the fire, the robot activates a fan/servo or water sprayer to put out the flame.
4. **Feedback**: LED indicator shows fire status.

---

📦 How to Run
Assemble all components on chassis.
Connect the sensors, motors, and actuator to Arduino as per the diagram.
Upload the code using Arduino IDE.
Power the robot using a 12V battery or USB.
Place a small fire source (like a candle) and observe the robot detect and extinguish it.

⚠️ Safety Note
Do not use near hazardous or large fires.
Always test in a controlled environment.
Keep a real fire extinguisher nearby when testing with open flames.

📚 References
Arduino Flame Sensor Datasheet
L298N Motor Driver Guide
Arduino Uno Official Documentation

🧑‍💻 Author
Umesh Chandra Punati
B.Tech IoT with AIML – KL University

