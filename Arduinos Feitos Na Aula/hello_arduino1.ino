// C++ code
//
void setup()
{
  Serial.begin(9600);// Configura a porta serial do Arduino
  pinMode(LED_BUILTIN, OUTPUT);// configura o LED interno como saída
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);//Acende o LED
  Serial.print("Hello ");//escreve na porta serial
  delay(100); // Aguarda 1000 milisegundos
  digitalWrite(LED_BUILTIN, LOW);//Apaga o LED
  Serial.println("World!");// escreve na porta serial
  delay(100); // Aguarda 1000 milisegundos
}