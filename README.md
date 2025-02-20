Home Automation with PIC16F877A and ESP32  

This repository contains two embedded system projects focusing on **home automation** using **PIC16F877A** and **ESP32**.

## 🚀 Project 1: Home Automation using PIC16F877A  
This project utilizes the **PIC16F877A microcontroller** to control multiple loads and display system status on an **LCD screen**.  

### 🔹 Features:
- Controls **four loads (L1, L2, L3, L4)** based on input signals.
- Displays **WiFi status (ON/OFF) on an LCD screen**.
- Implements **I2C communication** for external device interfacing.
- Uses **digital inputs** for manual control.

### 🛠️ Components Used:
- **PIC16F877A Microcontroller**
- **20MHz Crystal Oscillator**
- **16x2 LCD Display**
- **I2C Module**
- **Switches & Relays**
- **Power Supply Circuit**

---

## 🚀 Project 2: ESP32 WiFi-Based Home Automation (Blynk Integration)  
This project connects an **ESP32 microcontroller** to the **Blynk IoT platform**, allowing remote control of home appliances via a mobile app.

### 🔹 Features:
- WiFi-based **remote home automation**.
- Controls **four relays** via **physical switches and Blynk virtual buttons**.
- Monitors and synchronizes relay states with **Blynk Cloud**.
- Includes **manual override** for local control.

### 🛠️ Components Used:
- **ESP32 Development Board**
- **Blynk IoT Platform**
- **WiFi Network**
- **Relays & Switches**
- **LED Indicators**

---

## 📂 Project Files:
- `pic16f877a_code.c` → Home automation firmware for PIC16F877A.
- `wifi_code.ino` → ESP32-based Blynk automation firmware.
- `config.h` → Configuration file for PIC16F877A.
- `I2C.h` → I2C communication header file.

## 🛠️ Setup Instructions:
1. **PIC16F877A Project**:
   - Load the firmware onto **PIC16F877A** using **MPLAB X IDE** and **XC8 compiler**.
   - Connect the circuit as per the schematic.
   - Power up the system and monitor the LCD screen.

2. **ESP32 Blynk Project**:
   - Install the **Blynk app** and create a new project.
   - Replace `BLYNK_AUTH_TOKEN`, `SSID`, and `PASSWORD` in the `wifi_code.ino` file.
   - Upload the code to **ESP32** using **Arduino IDE**.
   - Open the **Blynk app** to control appliances remotely.

---

## 📜 License:
This project is open-source and free to use for educational purposes.

---

💡 **Contributions are welcome!** Feel free to fork, modify, and enhance this project.  
📩 **For any inquiries, contact:** [Your Email or GitHub Profile]  

🚀 **Happy Coding!**