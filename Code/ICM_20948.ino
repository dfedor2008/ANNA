void ICM20948() {
  if (myICM.dataReady()) {
    myICM.getAGMT();

    float x_accel = myICM.accX();
    float y_accel = myICM.accY();
    float z_accel = myICM.accZ();
    float x_gyro = myICM.gyrX();
    float y_gyro = myICM.gyrY();
    float z_gyro = myICM.gyrZ();

    Serial.println("X_Accel, Y_Accel, Z_Accel");

    Serial.print(x_accel);
    Serial.print(", ");
    Serial.print(y_accel);
    Serial.print(", ");
    Serial.println(z_accel);

    Serial.println("X_Gyro, Y_Gyro, Z_Gyro");
    Serial.print(x_gyro);
    Serial.print(y_gyro);
    Serial.print(z_gyro);


    File accelFile = SD.open("ICM20498.TXT", FILE_WRITE);
    if (accelFile) {
      accelFile.print("Seconds after Launch  ");
      accelFile.print(sec_after_launch, 2);
      accelFile.print("        ");
      accelFile.print(x_accel, 2);
      accelFile.print(", ");
      accelFile.print(y_accel, 2);
      accelFile.print(", ");
      accelFile.print(z_accel, 2);
      accelFile.print("        ");
      accelFile.print(x_gyro, 2);
      accelFile.print(y_gyro, 2);
      accelFile.println(z_gyro, 2);
      accelFile.close();
    } else {
      Serial.println("Failed to open ICM20498.TXT");
    }
  }
}
