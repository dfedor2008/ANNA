void clearSDCard() {
  if (SD.exists("ICM20498.txt")) {
    SD.remove("ICM20498.txt");
    Serial.println("Deleted ICM20498.txt");
  } else {
    Serial.println("ICM20498.txt does not exist");
  }
  if (SD.exists("BME_Data.txt")){
    SD.remove("BME_Data.txt");
    Serial.println("Deleted BME_Data.txt");
    }
    else{
    Serial.println("BME_Data.txt doesn't exist");
    }
}
void make_ICM20498_file() {
  File accelFile = SD.open("ICM20498.txt", FILE_WRITE);
  if (accelFile && accelFile.size() == 0) {
    accelFile.println("Time,                     AccelX, AccelY, AccelZ      GyroX, GyroY ,GyroZ   ");
    accelFile.close();
  }
}
void make_BME_file() {
  File bmeFile = SD.open("BME_Data.txt", FILE_WRITE);
  if (bmeFile && bmeFile.size() == 0) {
    bmeFile.println("Temperature, Pressure, Humidity, Altitude, Time ");
    bmeFile.close();
  }
}
