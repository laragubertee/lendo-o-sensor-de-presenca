Código: 

// C++ code
//

int ledPin = 6;
int sensor = 7;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop()
{
  if (digitalRead(sensor) == HIGH){
    digitalWrite(ledPin, HIGH);
    delay(5000);
  }else {
    digitalWrite(sensor, LOW);
    
  }
}


Simulação de um sistema de automação e detecção de presença no Tinkercad utilizando Arduino Uno. O circuito utiliza um sensor PIR para detectar movimentação no ambiente e um LED como atuador.
Funcionamento: o sensor PIR monitora o ambiente e, ao identificar movimento, envia um sinal de entrada ao Arduino. O código em C++ processa essa leitura e aciona a saída digital, acendendo o LED automaticamente. O LED permanece apagado enquanto nenhuma presença for detectada.
