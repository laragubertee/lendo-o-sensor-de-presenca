
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



