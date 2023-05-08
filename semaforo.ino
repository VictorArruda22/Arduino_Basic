//Declaração das váriaveis globais

int greenLedCar = 7;
int yellowLedCar = 5;
int redLedCar = 3;
int redPed = 12;
int greenPed = 11;
int bottom = 8; 
int bottomState;
int semaforo;

//Declarando se a váriavel é de entrada ou saída
void setup() {
  
  pinMode(greenLedCar, OUTPUT);
  pinMode(yellowLedCar, OUTPUT);
  pinMode(redLedCar, OUTPUT);
  pinMode(redPed, OUTPUT);
  pinMode(greenPed, OUTPUT);
  pinMode(bottom, INPUT);

  //Inicializando a váriavel semaforo
  semaforo = 1;

}

void loop() {

  //Lendo o estado do botão
  bottomState = digitalRead(bottom);

  //Condição para os clicks do botão
  if(bottomState == 1){
      
      if(semaforo < 3){
        semaforo = semaforo +1; 
      }
    else{
      semaforo = 1;  
    }  
  }

  //Condição para semaforo verde do carro
  if(semaforo == 1){
    digitalWrite(greenLedCar, HIGH);
    digitalWrite(redPed, HIGH);
    digitalWrite(yellowLedCar, LOW);
    
    digitalWrite(redLedCar, LOW);
    digitalWrite(greenPed, LOW);
  }
  //Condição para semaforo amarelo do carro
  else if(semaforo == 2){
    digitalWrite(greenLedCar, LOW);
    
    digitalWrite(redPed, HIGH);
    digitalWrite(yellowLedCar, HIGH);
    
    digitalWrite(redLedCar, LOW);
    digitalWrite(greenPed, LOW);
  }
  //Condição para semaforo vermelho do carro
  else if (semaforo == 3){
    digitalWrite(greenLedCar, LOW);
    digitalWrite(redPed, LOW);
    digitalWrite(yellowLedCar, LOW);
    
    digitalWrite(redLedCar, HIGH);
    digitalWrite(greenPed, HIGH);
  }
  delay(100);
}