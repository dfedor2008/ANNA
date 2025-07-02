

void begining_led() {
  for (int x = 0; x < 5; x++) {

    PORT->Group[0].OUTCLR.reg = (1 << 3);
    delay(100);
    PORT->Group[0].OUTSET.reg = (1 << 3);
    delay(100);
  }
}


void set_up_led() {
  PORT->Group[0].OUTSET.reg = (1 << 3);
  delay(500);

  // Set PA03 low
  PORT->Group[0].OUTCLR.reg = (1 << 3);
  delay(500);

  // Set PA03 low
}
void problem_led() {
  PORT->Group[0].OUTSET.reg = (1 << 3);
  delay(900);

  // Set PA03 low
  PORT->Group[0].OUTCLR.reg = (1 << 3);
  delay(100);

}
