#include <Servo.h>

Servo myservo;
int pot = 0;
int val;

void setup()
{
    myservo.attach(10);
    Serial.begin(9600);
}

void loop()
{
    val = analogRead(pot);
    val = map(val, 0, 1023, 0, 179);
    myservo.write(val);
    delay(15);
}
