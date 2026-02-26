# Arduino-Based Laser Security Alarm 📄🔐

An advanced security system using laser beam and LDR sensor to detect intrusions.
The system uses **laser module**, **LDR sensor**, and **buzzer alert**, following a **fail-safe alarm architecture**.

## 📌 Project Overview

- Laser beam intrusion detection
- LDR (Light Dependent Resistor) based sensing
- Real-time alarm triggering
- Audible alert system with buzzer
- Adjustable sensitivity settings
- Easy calibration mechanism
- Minimal false alarms

## 🧠 System Architecture

### High-Level Block Diagram

The system consists of three main components:

- **Laser Transmitter** – Generates continuous laser beam
- **LDR Sensor** – Detects beam obstruction
- **Alarm Controller** – Triggers buzzer on detection

## 📄 Laser Module (Transmitter)

- Continuous laser output
- Stable beam propagation
- Long-range coverage
- Low power consumption
- Reliable triggering

## 🚱 LDR Sensor (Receiver)

- Light-dependent resistance measurement
- Analog voltage output
- Threshold-based detection
- High sensitivity to beam interruption
- Automatic calibration support

## 🔓 Alarm System

- Digital buzzer output
- Adjustable alarm duration
- Sound pattern customization
- Visual LED indicator (optional)
- Manual override capability

## 📁 Repository Structure

```
Arduino-based-laser-security-alarm/
├── laser_alarm_controller/
│   └── laser_alarm.ino
├── ReadMe-Files/
│   ├── CircuitDiagram.png
│   ├── AlarmSetup.jpg
│   └── CalibrationGuide.md
└── README.md
```

## ⚙️ Hardware Used

- Arduino Nano / UNO
- Laser Module (Red or Green, 5V)
- LDR (Light Dependent Resistor)
- Buzzer (5V)
- Resistors (10kΩ for LDR voltage divider)
- Power Supply (5V)
- Jumper Wires & Breadboard
- Mounting bracket for laser

## 🛡️ Safety Features

- Beam obstruction detection
- Threshold-based false alarm prevention
- Automatic system reset
- Manual bypass option
- Low-power standby mode
- Component failure detection

> Any obstruction of the laser beam is immediately detected and triggers the alarm.

## 📄 Calibration

- Auto-calibration on startup
- Adjustable threshold setting
- Sensitivity fine-tuning
- Easy reset procedure

## 👥 Contributors

- **Soumya Ray** – B.Tech AI & DS, Amrita Vishwa Vidyapeetham

## 🚀 Future Work

- Mobile app notifications
- Multiple laser zones
- Smart scheduling
- Cloud integration
- Advanced analytics

⭐ **If you like this project, feel free to fork and extend it.**

## © Copyright

© 2025 **Soumya Ray**. All rights reserved.

This project is developed for **academic and educational purposes**.
Permission is granted to use, modify, and distribute this work **with proper attribution** to the original author.

Commercial use or redistribution without explicit permission from the author is **not permitted**.
