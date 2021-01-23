#include <LedControl.h>

LedControl lc = LedControl (12, 11, 10, 1);
int postion = 0;
int row;
void setup() {

  Serial.begin (9600);

  lc.shutdown (0, false);

  // set the brightness to a low value
  lc.setIntensity (0, 0); // 0 = low; 8 = high

  // clear the display 
  lc.clearDisplay(0);
}

// here is the series of instructions for the continuously running part of the sketch

void loop() {

  for (postion = 0; postion <= 8; postion++) {
    //lc.setLed(0, 1, 1, false); // erase previous ball position
    delay(500);

    lc.setLed(0, row, postion, true);
    if (postion == 8) {
      addRow();
    }
    if (row == 8) {
      lc.clearDisplay(0);
      row = 0;
    }

  }
}

void addRow() {
  delay(500);
  row++;

}
