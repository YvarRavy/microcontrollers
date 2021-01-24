const int ledPin =  13;     // number of let pin
const int buttonPin = 2;

int ledState = LOW;        // sets led
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
//  pinMode(buttonPin, INPUT);
}
void loop() {
      buttonState = digitalRead(buttonPin);
      
      if (buttonState == HIGH) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }
      
      digitalWrite(ledPin, ledState);
  }
}
