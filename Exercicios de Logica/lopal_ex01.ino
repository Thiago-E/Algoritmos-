


//Variaveis

int idade = 0;//inicia a idade
int idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
int idadeMinutos = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuario
  while(! Serial.available() ){}//Aguarde o usuario digitar (para o loop)
  idade = Serial.parseInt();
  
 //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;
    
 
 //saida
    
    Serial.println( "Sua idade em Meses e: " + String(idadeMeses));
    Serial.println( "Sua idade em Dias e: " + String(idadeDias));
    Serial.println( "Sua idade em Horas e: " + String(idadeHoras));
    Serial.println( "Sua idade em Minutos e: " + String(idadeMinutos)) ;           
                 
}