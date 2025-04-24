//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Variaveis

int DataNascimento = 0;
int idade = 0;
int idadeSemana = 0;
int Anoatual = 0;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
 //entrada
  Serial.println("Digite a sua data de nascimento");//pergunta a data de nascimento do usuario
  while(! Serial.available() ){}//Aguarde o usuario digitar (para o loop)
  idade = Serial.parseInt();
  Serial.println("Digite a sua idade");//pergunta a idade do usuario
  while(! Serial.available() ){}//Aguarde o usuario digitar (para o loop)
  idade = Serial.parseInt();
 //processamento
  idade = Anoatual - DataNascimento;
  idadeSemana = Anoatual * 52 ;
  
  
 //saida
   Serial.println( "Sua idade em Semana e: " + String(idadeSemana));
   Serial.println( "Sua idade e: " + String(idade));
   
  
  
}