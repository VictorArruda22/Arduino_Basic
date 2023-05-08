int yellowLed = 5;
int bottomUp = 3;
int bottomDown = 7;
int bottomState;
int bottomStateD;
boolean count;

void setup() {
    pinMode(yellowLed, OUTPUT);
    pinMode(bottomUp, INPUT_PULLUP);
    pinMode(bottomDown, INPUT_PULLUP);

}

void loop() {
  bottomState = digitalRead(bottomUp);
  bottomStateD = digitalRead(bottomDown);

  //Condição para armazenar o estado do botão
  if(bottomState == LOW){   
      count = true;
  }
  else if(bottomStateD == LOW){   
      count = false;
  }

  //Condição para ligar ou desligar o led
  if(count == true){
     digitalWrite(yellowLed, HIGH);
  }
  else if(count == false){
      digitalWrite(yellowLed, LOW);
  }
  delay(200);
}