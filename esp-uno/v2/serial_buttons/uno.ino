int buttonPin2 = 2; // nomeia o pino2 do arduino como buttonPin2
int buttonPin3 = 3; // nomeia o pino3 do arduino como buttonPin3
int ledPin = 13;    // nomeia o pino13 do arduino como ledPin
int valor;
int buttonStatus2;  // Variavel de estado do buttonPin2
int buttonStatus3;  // Variavel de estado do buttonPin2

int potenciometro1 = A1;
int potenciometro2 = A0;

void setup() {
	pinMode(potenciometro1, INPUT);
	pinMode(potenciometro2, INPUT);
  pinMode(ledPin, OUTPUT);            //Pino13 como saida
  pinMode(buttonPin2, INPUT_PULLUP);  //Pino2 como entrada com resistor de pullup interno
  pinMode(buttonPin3, INPUT_PULLUP);  //Pino3 como entrada com resistor de pullup interno
  Serial.begin(115200);           //Inicialica a comunicação serial
}

void loop() {
  buttonStatus2 = digitalRead(buttonPin2);
  buttonStatus3 = digitalRead(buttonPin3);


 if ((buttonStatus2 == LOW)){
   	valor = analogRead(potenciometro1);
    Serial.print("A");Serial.println(valor);                   // Então acenda o led
    
    delay(500);                                            // delay de 0,5 seg.
  }

  if ((buttonStatus3 == LOW)){   // Se botao2 E(AND) botão3 for pressionado
    valor = analogRead(potenciometro2);
	Serial.print("B");Serial.println(valor);                            // Então apaga o led
    delay(500);                                            // delay de 0,5 seg.
  }

}
