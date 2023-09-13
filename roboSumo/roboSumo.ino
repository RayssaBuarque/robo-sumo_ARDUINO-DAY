//porta digital do motor
#define motorA 12 
#define motorB 8 

int valor_Bluetooth = 0; // Dados bluetooth
int valor_entrada = 0; //valor após mapeamento

void setup()
{
  
  Serial.begin(9600); 

  //configurando porta dos motores
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT); 
  
}

void loop()
{
  if(Serial.available()){
    valor_Bluetooth = Serial.read();
    Serial.println(valor_Bluetooth);
    
    analogWrite(motor, valor_Bluetooth);
   
     delay(10);
  }
  
}
