#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <SPI.h>
#include <SD.h>
#include "ICM_20948.h"
#include <Scheduler.h>
#include <MadgwickAHRS.h>
#include "RTCZero.h"

#define WIRE_PORT Wire
#define Serial SerialUSB
#define AD0_VAL 0
#define SEALEVELPRESSURE_HPA (1013.25)
Adafruit_BME280 bme;

unsigned long delayTime;
Sd2Card card;
ICM_20948_I2C myICM;
RTCZero rtc;

const int chipSelect = 5;
volatile uint32_t startTick = 0;
volatile uint32_t elapsed = 0;
float gx_offset = 0;
float gy_offset = 0;
float gz_offset = 0;
int samples = 1000;
void begining_led();
void set_up_led();
void problem_led();
void BME280();
void ICM20948();
void clearSDCard();
void make_ICM20498_file();
void make_BME_file();
void start_functions();
void time_keeping();
void calibrateGyro();

bool SD_Card = false;
bool status_BME280 = false;
bool status_ICM20948 = false;


void setup() {
  start_functions();
  begining_led();
  Serial.begin(9600);
  unsigned long serialTimeout = millis();
  while (!Serial && millis() - serialTimeout < 3000)
    ;
  Serial.println();
  Serial.println("                            ANNA Project by Dawid Fedor");
  unsigned status;
  status = bme.begin(0x76);
  Serial.print("Initializing SD card...");
  if (!SD.begin(chipSelect)) {
    Serial.println("SD card initialization failed!");
    SD_Card = false;
  } else {
    Serial.println("SD card initialized.");
    clearSDCard();
    make_BME_file();
    make_ICM20498_file();

    SD_Card = true;
  }

  delay(1000);
  if (!status) {
    Serial.println("BME280 is not recognized");
  } else {
    Serial.println("BME280 is connected");
    status_BME280 = true;
  }
  WIRE_PORT.begin();
  WIRE_PORT.setClock(400000);

  bool initialized = false;
  while (!initialized) {
    myICM.begin(WIRE_PORT, AD0_VAL);

    if (myICM.status != ICM_20948_Stat_Ok) {
      Serial.println("Trying again...");
      delay(500);
    } else {
      initialized = true;
      status_ICM20948 = true;
    }
  }
  Serial.println("ICM20948 connected at 0x68 and initialized!");
  calibrateGyro();
  delay(1000);
}
void loop() {
  BME280();
  time_keeping();
  ICM20948();
  delay(100);
}

void loopsetup() {
  set_up_led();
  if (elapsed > 3) {
    if (SD_Card == false || status_BME280 == false || status_ICM20948 == false) {
      problem_led();
    }
  }
}
