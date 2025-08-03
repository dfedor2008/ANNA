void BME280() {
  float temp = bme.readTemperature();
  float pres = bme.readPressure();
  float humidity = bme.readHumidity();
  float Alt = bme.readAltitude(SEALEVELPRESSURE_HPA);
  Serial.println();
  Serial.print("Temperature = ");
  Serial.print(temp);
  Serial.print(" °C          ");
  Serial.print("Pressure = ");
  Serial.print(pres / 100.0F);
  Serial.print(" hPa          ");
  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.print(" %          ");
  Serial.print("Altitude = ");
  Serial.print(Alt);
  Serial.print(" m          ");

  File bmeFile = SD.open("BME_Data.txt", FILE_WRITE);
  if (bmeFile) {
    bmeFile.print("Temperature= ");
    bmeFile.print(temp);
    bmeFile.print(" °C          ");
    bmeFile.print("Pressure = ");
    bmeFile.print(pres / 100.0F);
    bmeFile.print(" hPa          ");
    bmeFile.print("Humidity = ");
    bmeFile.print(humidity);
    bmeFile.print(" %          ");
    bmeFile.print("Altitude = ");
    bmeFile.print(Alt);
    bmeFile.print(" m          ");
    bmeFile.print("Seconds after launch  ");
    bmeFile.println(elapsed/1000);
    bmeFile.close();
  } else {
    Serial.println("Failed to open BME_Data.txt");
  }
//  delay(10);

  Serial.println();
}
