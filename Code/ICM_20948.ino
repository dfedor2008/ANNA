void ICM20948() {
  if (myICM.dataReady()) {
    myICM.getAGMT();

    float x_accel = myICM.accX();
    float y_accel = myICM.accY();
    float z_accel = myICM.accZ();
    float x_gyro = myICM.gyrX() - gx_offset;
    float y_gyro = myICM.gyrY() - gy_offset;
    float z_gyro =myICM.gyrZ() - gz_offset;

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
      accelFile.print(elapsed / 1000);
      accelFile.print("        ");
      accelFile.print(x_accel, 2);
      accelFile.print(", ");
      accelFile.print(y_accel, 2);
      accelFile.print(", ");
      accelFile.print(z_accel, 2);
      accelFile.print("        ");
      accelFile.print(x_gyro, 2);
      accelFile.print(", ");
      accelFile.print(y_gyro, 2);
      accelFile.print(", ");
      accelFile.println(z_gyro, 2);
      accelFile.close();
    } else {
      Serial.println();
      Serial.println("Failed to open ICM20498.TXT");
    }
  }
}
void calibrateGyro() {
  Serial.println("Calibrating gyro... Keep the device still.");
  for (int i = 0; i < samples; i++) {
    myICM.getAGMT();  // refresh data
    gx_offset += myICM.gyrX();
    gy_offset += myICM.gyrY();
    gz_offset += myICM.gyrZ();
    delay(2);
  }
  gx_offset /= samples;
  gy_offset /= samples;
  gz_offset /= samples;

  Serial.print("Gyro offsets: ");
  Serial.print(gx_offset); Serial.print(", ");
  Serial.print(gy_offset); Serial.print(", ");
  Serial.println(gz_offset);
}
