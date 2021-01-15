const int ledPin = 13;// Led on arduino board.
#include <Servo.h> // include servo zodat ik servo commands kan gebruiken.

Servo servo; // name de servo

int pos = 0;

void setup()
{ 
  pinMode(ledPin,OUTPUT); // pin 13 gebruiken als output
  pinMode(2,INPUT);// pin 2 gebruiken als input
  digitalWrite(2, HIGH);//set pin2 as HIGH
  servo.attach(9); // servo is gekoppeld aan pin 9
} 

void loop() 
{ 
int digitalVal = digitalRead(2);// de value van de titl sensor lezen
if(HIGH == digitalVal)// als titl omhoog wijzt ga naar positie 180 en led on 
{
  digitalWrite(ledPin,HIGH);
  servo.write(180);
}
else 
{
  digitalWrite(ledPin,LOW);
  servo.write(0); 
}
}
