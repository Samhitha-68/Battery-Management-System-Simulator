# 🔋 Battery Management System (BMS) Simulator in C

A simple Battery Management System (BMS) Simulator developed in C to understand the core working principles of a Battery Management System used in Electric Vehicles (EVs) and battery-powered devices.

This project simulates battery charging, discharging, battery monitoring, and basic battery protection mechanisms through a menu-driven console application.

---

## 📌 Project Objectives

- Simulate battery charging and discharging.
- Monitor important battery parameters.
- Implement basic battery protection features.
- Improve C programming skills using modular programming.
- Understand the working of a Battery Management System.

---

## ✨ Features

### 🔹 Battery Charging
- Increases State of Charge (SoC).
- Updates battery voltage.
- Stops charging automatically when the battery reaches 100%.

### 🔹 Battery Discharging
- Decreases State of Charge (SoC).
- Reduces battery voltage.
- Prevents the battery from discharging below 0%.

### 🔹 Battery Monitoring
Displays:
- State of Charge (SoC)
- Battery Voltage
- Battery Current
- Battery Temperature
- Charging Status
- State of Health (SoH)

### 🔹 Temperature Simulation
- Battery temperature increases while charging.
- Battery temperature decreases during discharging (up to room temperature).

### 🔹 Battery Protection
- Overcharge Protection
- Over-discharge Protection
- Over-temperature Protection
- Low Battery Warning
- Critical Battery Warning

---

## 🛠 Technologies Used

- C Programming
- GCC Compiler
- Visual Studio Code
- Git
- GitHub

---

## 📂 Project Structure

```
01_BMS_Simulator
│
├── main.c
├── battery.c
├── battery.h
└── README.md
```

---

## ▶️ How to Run

Compile:

```bash
gcc main.c battery.c -o bms
```

Run:

```bash
./bms
```

---

## 📋 Menu Options

```
========= BMS MENU =========

1. Charge Battery
2. Discharge Battery
3. View Battery Status
4. Exit
```

---

## 📈 Current Implementation

✅ Menu-driven program

✅ Charging simulation

✅ Discharging simulation

✅ State of Charge (SoC)

✅ Voltage update

✅ Temperature simulation

✅ Battery status display

✅ Overcharge protection

✅ Over-discharge protection

✅ Over-temperature protection

✅ Low battery warning

✅ Critical battery warning

---

## 🚀 Future Enhancements

- Battery Health (SoH) calculation
- Charge cycle counting
- Error logging
- Battery ageing simulation
- Data logging to file
- Graphical dashboard
- Embedded implementation using Arduino/STM32

---

## 🎯 What I Learned

Through this project, I gained practical experience in:

- Modular programming in C
- Functions and structures
- Pointer-based function implementation
- Battery Management System (BMS) concepts
- Battery protection logic
- Git and GitHub version control

---

## 👩‍💻 Author

**Samhitha**

Pre-final Year B.E. Electronics and Communication Engineering (ECE)

Aspiring Embedded Systems Engineer
