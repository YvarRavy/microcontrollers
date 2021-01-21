#include <LedControl.h>

LedControl lc = LedControl (12, 11, 10, 1);
int postion = 0;
int row;

void setup()
{
    Serial.begin (9600);

    lc.shutdown (0, false);

    // set the brightness to a low value
    lc.setIntensity (0, 0); // 0 = low; 8 = high

    // clear the display 
    lc.clearDisplay(0);
}

void loop()
{
}
