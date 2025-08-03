# ANNA - High Altitude Rocket Computer

![ANNA Banner](https://github.com/user-attachments/assets/5f8c6b52-9430-48d5-be35-250324938b7b)

## Project Goal
Create a compact, affordable (under $100) and reliable rocket computer that can support both small and large-scale model rocket launches.

## What is ANNA?
ANNA is a high-altitude rocket computer originally developed for a balloon-launched rocket project. It is designed to record key environmental and motion data during rocket flight, with plans to add telemetry and recovery features in future iterations.

Current features include:
- 3D orientation (gyroscope)
- Acceleration data
- Environmental measurements (temperature, pressure, humidity)
- MicroSD data logging
- Radio telemetry (in testing)

Future versions will include GPS and pyro channel support.

---

## Components

- **Microcontroller:** ATSAMD21G18A-A  
- **Radio Module:** SX1262 – Long-range, LoRa-based radio operating in the 915 MHz band  
- **Environmental Sensor:** BME280 – Measures temperature, pressure, and humidity  
- **IMU:** ICM-20948 – Provides 3D orientation and acceleration data  
- **Voltage Regulation:** AMS1117-3.3 – 3.3V linear regulator  
- **Storage:** MEM2061-01-188-00-A_REVA microSD slot

---

## Current Status *(as of 6/26/2025)*
-  Gyroscope (ICM-20948): Functional  
-  BME280 Sensor: Functional  
-  MicroSD Slot: Functional  
-  Power Regulation: Functional  
-  SX1262 Radio: Testing phase

---

## Planned Features
- **GPS Support:** ATGM336H module with passive antenna (for telemetry up to 13km)  
- **Pyro Channels:** For recovery deployment and staging

---

## Radio Specification
The **SX1262** LoRa radio transmits in the 915 MHz ISM band. No HAM license is required in the U.S. to operate. It's inexpensive (~$3.50) and supports long-range two-way communication suitable for rocket telemetry.

---

## LED Behavior

| LED Pattern                       | Meaning                                 |
|----------------------------------|-----------------------------------------|
| Blinking 0.5s ON / 0.5s OFF      | All sensors are functioning             |
| Blinking 0.9s ON / 0.1s OFF      | At least one sensor failed to initialize |
| Off                              | Power issue / board not active          |

---

## Setting Up ANNA

1. **Download Arduino IDE:**  
   https://www.arduino.cc/en/software

2. **Install SAMD Core:**  
   https://docs.arduino.cc/learn/starting-guide/cores/

3. **Download and upload the firmware** from this repository to ANNA.

4. **Connect the board** to your computer and select *Arduino Zero (Native USB Port)* as the target board.

---

## Contact
Have questions, want to donate, or collaborate?  
📧 **dawid.fedor08@gmail.com**

---

## Special Thanks

- **Max Kendall** – For design, code, and logistics support  
- **Seth Kendall** – For logistics and ongoing project encouragement  
- **Bob Phinney** – For project funding support  
- **Szymon Fedor** – For transportation and logistical help to Sci-Tech

---

## License

This project is released under [insert applicable license, e.g., MIT or GPLv3]
