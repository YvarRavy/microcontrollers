const int ledPin =  13;     // number of let pin
const int buttonPin = 2;

int ledState = LOW;        // sets led
int buttonState = 0;

unsigned long previousMillis = 0;

const long interval = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
//  pinMode(buttonPin, INPUT);
}
void loop() {
  unsigned long currentMillis = millis();
  

  if buttonState == 1 then lkeydown=true
  if lkeydown and buttonstate == 0 then lbuttonpressed
  if buttonpressed ledState = !ledState
  
  if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;

      buttonState = digitalRead(buttonPin);
      
      if (buttonState == HIGH) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }
      
      digitalWrite(ledPin, ledState);
  }
}
