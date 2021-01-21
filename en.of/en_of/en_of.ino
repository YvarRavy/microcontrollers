int button1 = 2;
int button2 = 3;
int State1;
int State2;
int led = 13;


void setup()
{
    pinMode(led, OUTPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
}

void loop()
{
    State1 = digitalRead(button1);
    State2 = digitalRead(button2);
    if (State1 == HIGH && State2 == HIGH) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}
