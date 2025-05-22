// C++ code
//

/*
	cria vetor tamanho 4
	Camel Case
*/

String convidados[4];
int idadeConvidados[4];
String emailConvidados[4];

void desenhaCabecalho()
{
  Serial.println("----|  Bem-Vindo ao ChurrasBarato!!  |----");
  Serial.println("----| Deseja fazer um cadastro? 	   |-----");
  
}

void setup()
{
  Serial.begin(9600);//inicia a comunicacao serial
  
  
  
}

void loop()
{
  //fazer um cabecalho bonitinho para o programa
  desenhaCabecalho();
  
  for(int i = 0;i < 4; i++)
  {
   //solicitar o nome do usuario
    Serial.println("informe " +String(i + 1) + "o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
   //solicitar a idade
    Serial.println("informe a idade de "+ convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
   //solicitar o email 
    Serial.println("informe o email de ");
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    
    Serial.println();
    
  }//fim do for
  
  
  
  //Exibir a lista de convidados
  //obs:so vai na festa quem for maior de idade >= 18
  
  Serial.println("**Exibindo convidados eleitos pra a festa**");
  
  for(int i = 0; i < 4; i++)
  {
    if(idadeConvidados[i] >=18)
    {//apenas maiores de 18   
   Serial.println("-------------");
   Serial.println("Nome: "+ convidados[i]);
   Serial.println("Idade: "+ idadeConvidados[i]);
   Serial.println("Email:"+ emailConvidados[i]);
   Serial.println("Permissao para a festa:  " + String(idadeConvidados[i] >= 18 ? "OK" : "Menos de idade"));
   
   Serial.println("-------------");
   Serial.println();	
    
    
    
    
  }
  
  
  
   }
  
  
  delay(20000);	

}
                  
                  //fim do loop