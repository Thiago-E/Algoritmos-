//Aprendendo sobre variáveis
//Resumidamente são rótulos que podem armazenar valores
//temporariamente que podem variar com o passar do tempo
// e que tem um tipo de dado específico (textos, numerícos, ou boleanos)

//Configuração inicial do Arduino
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

//Variáveis
int idade = 0;

//Looping infinito - funciona até desligar o arduino
void loop()
{
 idade= idade + 1;//1
 idade=	idade + 1;//2
  
  
  Serial.println(String(idade) );//imprime o valor de idade - converter para texto
  delay(1000);
}