# ESP32 Smartwatch Project

## Project Goals
Build a custom wearable smart watch from scratch to explore embedded systems, firmware developpement, and PCB integration. 

## Hardware Architecture

### Processing & Display
* **MCU:** ESP32-S3-WROOM-1 NR16R8 for Wi-Fi/BLE and dual-core processing.
* **Display:** 1.28" TFT LCD via SPI.
* **Input:** 3x Physical buttons .

### Sensors
* **Timekeeping:** Still looking for a compact RTC module
* **ToF Ranging:** VL53L0X (I2C) for distance measurement up to 2m via infrared pulses.
* **Biometrics:** MAX30102 for Heart Rate (requires tight skin contact).
* **Motion:** Still looking for gyroscope / accelerometer if required for the project.
* **Utility:** IR TX + IR RX

### Power Management
* **Battery:** LiPo (minimum 300mAh).
* **Charging:** TP4056 charging IC via USB-C.

## Software Features
* **Firmware:** Written in C++ via PlatformIO.
* **Power Management:** Sleep mode implementation with external wake-up interrupts.
* **Connectivity:**
    * Wi-Fi/BLE scanning tools.
    * ESP-NOW for ultra-fast communication with other ESP devices.

## Development Stages
1. **Prototyping:** Wiring all modules on breadboard with an ESP32 DevKit.
2. **Schematic & PCB :** I will use KiCAD to design PCB and schematics
4. **Assembly:** Probably hand soldering.
5. **Case creation  :** I will learn to use 3d modeling CAD like Fusion360 to create a case for the project.
