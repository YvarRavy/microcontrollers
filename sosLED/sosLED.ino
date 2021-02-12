int Led = 13;
void setup()
{
    pinMode(Led, OUTPUT);
}

void loop()
{
    digitalWrite(Led, HIGH);  //dot
    delay (500);              //dotlengte
    digitalWrite(Led, LOW);   
    delay(500);               
    digitalWrite(Led, HIGH);  //dot
    delay (500);
    digitalWrite(Led, LOW);   //dot
    delay(500);
    digitalWrite(Led, HIGH);  //dot
    delay (500);
    digitalWrite(Led, LOW);  //dash
    delay(1500);              //dash lengte
    digitalWrite(Led, HIGH); 
    delay (1500);             
    digitalWrite(Led, LOW);   
    delay(500);               
    digitalWrite(Led, HIGH);
    delay (1500);
    digitalWrite(Led, LOW);
    delay(500);
    digitalWrite(Led, HIGH);
    delay (1500);
    digitalWrite(Led, LOW); 
    delay(1500);
    digitalWrite(Led, HIGH);
    delay (500);
    digitalWrite(Led, LOW);
    delay(500);
    digitalWrite(Led, HIGH); 
    delay (500);
    digitalWrite(Led, LOW);
    delay(500);
    digitalWrite(Led, HIGH); 
    delay (500);
    digitalWrite(Led, LOW);   //woordspatie
    delay(3500);              //woordspatie lengte
}
