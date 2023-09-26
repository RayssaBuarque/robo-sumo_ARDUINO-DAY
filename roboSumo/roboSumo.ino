// Klayvem Guimarães
// Maria Luiza Fernandes
// Rayssa Buarque

#include <SoftwareSerial.h> 

int readBluetooth; //Variável que irá receber o comando enviado do Android
int pin1 = 4;
int pin2 = 5;
int pin3 = 6;
int pin4 = 7;

void setup() {
  Serial.begin(9600);//Inicia comunicação serial
  pinMode(pin1,OUTPUT); 
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
}
 
void loop() {
  if(Serial.available()>0){
    readBluetooth = Serial.read();
    if(readBluetooth == 'F'){
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin4, LOW);
      Serial.print("F");
    }
     if(readBluetooth == 'R'){
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, HIGH);
      Serial.print("R");
    }
     
    if(readBluetooth == 'P'){
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, LOW);
      Serial.print("P");
    }
  }
}
