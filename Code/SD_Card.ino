void clearSDCard() {
  if (SD.exists("ACCEL.txt")) {
    SD.remove("ACCEL.txt");
    Serial.println("Deleted ACCEL.txt");
  } else {
    Serial.println("ACCEL.txt does not exist");
  }
  if (SD.exists("BME_Data.txt")){
    SD.remove("BME_Data.txt");
    Serial.println("Deleted BME_Data.txt");
    }
    else{
    Serial.println("BME_Data.txt doesn't exist");
    }
}
void make_Acel_file() {
  File accelFile = SD.open("ACCEL.txt", FILE_WRITE);
  if (accelFile && accelFile.size() == 0) {
    accelFile.println("Time, AccelX, AccelY, AccelZ");
    accelFile.close();
  }
}
void make_BME_file() {
  File bmeFile = SD.open("BME_Data.txt", FILE_WRITE);
  if (bmeFile && bmeFile.size() == 0) {
    bmeFile.println("Temperature, Pressure, Humidity, Altitude, Time ");
    bmeFile.close();
    bmeFile.close();
  }
}
