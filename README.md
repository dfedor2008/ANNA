# ANNA- High Altitude Rocket Computer
![POL_COA_Pilawa svg](https://github.com/user-attachments/assets/0d7092b1-8683-4285-91ed-c0914ee1125b)

![20250626_141647](https://github.com/user-attachments/assets/3f038551-7a4c-41fe-a39a-b8c42a30b9a6)

#Goal:

Make a cheap ( under a hundred dollars) rocket computer which can serve as a rocket computer for small and large scale launches. To achieve this, the rocket computer has to be very compact so that it can fit in small rockets. 

# What is ANNA?
Anna is a rocket computer with a gyroscope, Mico SD Card, radio module, and pressure, humidity and temperature sensor. Future revisions will have a GPS and also pyro channels.


Components:
-Microcontroller- ATSAMD21G18A-A  

-RF radio- SX1262 -A powerful and cheap 2 way radio.

-Enviromental Sensor- BME280 - A cheap and reliable Bosh Sensor which measures humidity, temperature and pressure.

-Gyroscope-ICM-20948 - A gyroscope which outputs 3d axis orientation, temperature, and acceleration.

-Linear Regulator-AMS1117-3.3  

-Micro SD Card Slot- MEM2061-01-188-00-A_REVA - A cheap SD card slot.

**Current Status 6/26/2025:**
ANNA has a functional gyroscope, BME 280, MicroSD card slot, and linear regulator, the RF radio is during testing phase.

**Future Itterations:**

Future components will have a GPS ATGM336H, with a passive antenna. It will allow for telemetry data up to 13kM.

#**Radio Specification**

The SX1626 is a very powerful and cheap (around $3.5) radio module. The Sx1626 uses Lora to communicate on the 915 kHz band which doesn't require a HAM radio license. This allows for amateur aerospace to use this radio.





