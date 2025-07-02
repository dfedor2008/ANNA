# ANNA- High Altitude Rocket Computer

![Untitled](https://github.com/user-attachments/assets/5f8c6b52-9430-48d5-be35-250324938b7b)


![20250626_141647](https://github.com/user-attachments/assets/3f038551-7a4c-41fe-a39a-b8c42a30b9a6)

Goal:

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

#**LED Behavior:**
-LED blinks in constant intervals ( 0.5 sec On and 0.5 sec Off)- The BME280, the SD card slot, or the Gyroscope is working correctly.


-LED blinks in long and short intervals ( 0.9 sec on, and 0.1 sec off)- The BME280, the SD card slot, or the Gyroscope is not working correctly.

-LED is off- ANNA is not powered correctly

**Setting Up ANNA**
**1**   Download Arduino IDE from this link (it's free):

  https://www.arduino.cc/en/software/

**2**    Upload the code provided on my github.

**3**   Connect the board to the computer and select
  


**Contact Me:**

If you have any questions, comments, or want to donate please contact me at  dawid.fedor08@gmail.com. 

**Special Thank You:**

There are a couple people who I want to thank in particular for their help in this project.

-**Max Kendal**-for your extensive help with the design, coding and logistics of the project.

-**Seth Kendal**- for help with logistics and general support throughout the project

-**Bob Phinney**- for funding on the project

-**Szymon Fedor**- For donating time to drive me to Sci-Tech
