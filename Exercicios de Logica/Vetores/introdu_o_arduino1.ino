// C++ code
//

int ledInterno = 13;
int led = 12;
int sensorUmidade = 7;
void setup()
{
  pinMode(ledInterno , OUTPUT);
  pinMode(sensorUmidade , INPUT);
}

void loop()
{
  digitalWrite(ledInterno, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledInterno, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}