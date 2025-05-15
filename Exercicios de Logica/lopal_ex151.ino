// C++ code
//variaveis
float n1, n2, n3, n4, media; 
  
void setup()
{
  Serial.begin(9600)
}

void loop()
{
 //Entrada
  Serial.println("Digite a primeira nota")
  while ( ! serial.available ());
  n1 = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota")
  while ( ! serial.available ());
  n2 = Serial.parseFloat();
  
  Serial.println("Digite a terceira nota")
  while ( ! serial.available ());
  n3 = Serial.parseFloat();
  
  Serial.println("Digite a quarta nota")
  while ( ! serial.available ());
  n4 = Serial.parseFloat();
  
  //processamento
  media = (n1 + n2 + n3 + n4 ) / 4
    
    
    if (media >= 7) {
    Serial.println("Aprovado");
  }else if{(media >= && media<7)}
     Serial.println("Recuperacao")
}else{
  Serial.println("Reprovado")
} 