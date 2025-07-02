void ICM20948() {
  if (myICM.dataReady()) {
    myICM.getAGMT();

    float x_accel = myICM.accX();
    float y_accel = myICM.accY();
    float z_accel = myICM.accZ();

    Serial.print(x_accel);
    Serial.print(", ");
    Serial.print(y_accel);
    Serial.print(", ");
    Serial.println(z_accel);

    File accelFile = SD.open("ACCEL.TXT", FILE_WRITE);
    if (accelFile) {
      accelFile.print("Seconds after Launch  ");
      accelFile.print(sec_after_launch, 2);
      accelFile.print("        ");
      accelFile.print(x_accel, 2);
      accelFile.print(", ");
      accelFile.print(y_accel, 2);
      accelFile.print(", ");
      accelFile.println(z_accel, 2);
      accelFile.close();
    } else {
      Serial.println("Failed to open ACCEL.TXT");
    }
  }
}
