// Klayvem Guimarães
// Maria Luiza Fernandes
// Rayssa Buarque

//porta digital do motor
#define motor 12 

int valor_Bluetooth = 0; // Dados bluetooth

void setup()
{
  
  Serial.begin(9600); 

  //configurando porta dos motores
  pinMode(motor, OUTPUT);
  
}

void loop()
{
  //caso alguma informação na porta serial
  if(Serial.available()){
    //
    valor_Bluetooth = Serial.read();
    Serial.println(valor_Bluetooth);
    
    analogWrite(motor, valor_Bluetooth);
   
     delay(10);
  }
  
}
