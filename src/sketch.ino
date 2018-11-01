int led = 13;
 
void setup(){

    Serial.begin(9600);

    pinMode(led, OUTPUT);

}

void loop(){

    digitalWrite(led, HIGH);

    Serial.println("HIGH");

    delay(1000);

    digitalWrite(led, LOW);

    Serial.println("LOW");

    delay(1000);

}
