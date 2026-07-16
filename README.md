# Battery Management System (BMS) Simulator

## Overview

This project is a Battery Management System (BMS) Simulator developed in C. It simulates the basic operation of a lithium-ion battery by monitoring battery parameters and implementing essential safety features used in real Battery Management Systems.

The project was developed as part of Embedded Systems learning to understand battery monitoring, charging, discharging, and protection logic.

---

## Features

- Battery charging simulation
- Battery discharging simulation
- State of Charge (SoC) monitoring
- Battery voltage monitoring
- Battery temperature monitoring
- Charging status indication
- State of Health (SoH) tracking
- Charge cycle counting
- Low battery warning
- Critical battery warning
- Over-temperature protection
- Error logging
- Battery reset option
- Menu-driven interface

---

## Technologies Used

- C Programming
- Visual Studio Code
- Git
- GitHub

---

## Project Structure

```
01_BMS_Simulator/
│
├── main.c
├── battery.c
├── battery.h
├── README.md
└── .gitignore
```

---

## How to Run

1. Clone the repository.
2. Open the project in Visual Studio Code.
3. Compile the program.

Example:

```bash
gcc main.c battery.c -o bms
```

Run:

```bash
./bms
```

(On Windows)

```bash
bms.exe
```

---

## Sample Menu

```
========= BMS MENU =========

1. Charge Battery
2. Discharge Battery
3. View Battery Status
4. Reset Battery
5. Exit
```

---

## Future Enhancements

- Battery current simulation
- Battery percentage graph
- Charging time estimation
- File-based data logging
- Sensor integration using Arduino/ESP32
- LCD or OLED display support

---

## Author

**Samhitha**

Final Year Electronics and Communication Engineering (ECE)
