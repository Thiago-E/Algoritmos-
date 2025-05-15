void setup() {
  Serial.begin(9600);
}

int numero1 = 0;
int numero2 = 0;

void loop() {
  Serial.println("Digite o primeiro numero que deseja verificar");
  while (!Serial.available()) {}  // Wait for input
  numero1 = Serial.parseInt();    // Read the first number
  
  Serial.println("Digite o segundo numero que deseja verificar");
  while (!Serial.available()) {}  // Wait for input
  numero2 = Serial.parseInt();    // Read the second number
  
  if (numero1 > numero2) {
    Serial.println("O maior numero eh " + String(numero1));
  } 
  if (numero2 > numero1) {
    Serial.println("O maior numero eh " + String(numero2));
  }
  if (numero1 == numero2) {
    Serial.println("Os dois numeros sao iguais");
  }

  Serial.println();  
  delay(5000);      
}