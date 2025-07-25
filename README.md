# 🔥 Fire Extinguisher Robot using Arduino Uno

## 📘 Overview

The Fire Extinguisher Robot is an autonomous system built on Arduino Uno designed to detect and suppress fire in small-scale environments. It uses flame sensors to identify the presence and direction of fire, then navigates toward it and activates a suppression mechanism (fan or water sprayer) to extinguish it.

This project is ideal for academic demonstrations and understanding the fundamentals of embedded systems, robotics, and automation.

---

## 🔧 Components Used

| Component               | Quantity |
|------------------------|----------|
| Arduino Uno            | 1        |
| Flame Sensor Modules   | 2–3      |
| L298N Motor Driver     | 1        |
| DC Motors with Wheels  | 2        |
| Servo Motor / Water Pump | 1      |
| Fan / Sprayer          | 1        |
| 12V Battery Pack       | 1        |
| Robot Chassis          | 1        |
| Jumper Wires           | Several  |
| LED (Status Indicator) | 1        |

---

## 🔍 How It Works

1. **Fire Detection**: Flame sensors detect fire and estimate its direction.
2. **Movement**: The robot moves toward the fire using motor control logic.
3. **Extinguishing**: When close to the fire, the robot activates a suppression system.
4. **Feedback**: LEDs or sound buzzers can be used to signal fire detection and suppression.

---


---

## ⚙️ Setup Instructions

1. Assemble the robot chassis and mount components securely.
2. Connect all sensors, motors, and actuators to the Arduino and motor driver.
3. Upload the control code using Arduino IDE (refer to your implementation).
4. Power the system with a 12V battery pack.
5. Place a small controlled fire (e.g., a candle) in front of the robot for testing.

---

## ⚠️ Safety Guidelines

- Only use in a **controlled** and **safe** environment.
- Never test with large or hazardous fires.
- Always keep a **real fire extinguisher** nearby during testing.

---

## 👨‍💻 Author

**Umesh Chandra Punati**  
B.Tech IoT with AIML – KL University

---
