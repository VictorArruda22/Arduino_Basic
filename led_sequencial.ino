int redLed = 3;
int yellowLed = 5;
int greenLed = 7;

void setup() {
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
}

void loop() {
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(greenLed, HIGH);
    delay(800);
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
    delay(800);
    
    digitalWrite(redLed, HIGH);
    delay(800);
    digitalWrite(yellowLed, HIGH);
    delay(700);
    digitalWrite(greenLed, HIGH);
    delay(600);
    digitalWrite(redLed, LOW);
    delay(800);
    digitalWrite(yellowLed, LOW);
    delay(700);
    digitalWrite(greenLed, LOW);
    delay(600);
}
