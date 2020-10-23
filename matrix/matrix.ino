#include <LedControl.h>

LedControl lc = LedControl (12,11,10,1);

void setup() {

Serial.begin (9600);

lc.shutdown (0,false);

// set the brightness to a low value
lc.setIntensity (0,0); // 0 = low; 8 = high

// clear the display // goodbye smiley!
lc.clearDisplay(0);
}

// here is the series of instructions for the continuously running part of the sketch

void loop() {


//lc.setLed(0, 1, 1, false); // erase previous ball position
lc.setLed(0, 4, 4, true); // light up new ball position
lc.setLed(0, 3, 4, true); // light up new ball position
lc.setLed(0, 3, 3, true); // light up new ball position
lc.setLed(0, 4, 3, true); // light up new ball position
}
