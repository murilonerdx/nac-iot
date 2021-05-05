#include <Servo.h>	//importa a biblioteca do servo motor

Servo meuservo;  		// cria o objeto meuservo

int potpin = A0;  	// potenciometro no ligado no pino A0
int valor;    			// variavel que vai receber o valor lido do potenciometro

void setup() {
  meuservo.attach(9);  // configura o pino 9 do arduino para o servo motor
}

void loop() {
  valor = analogRead(potpin);            // faz a leitura do potenciometro e salva em valor (valores entre 0-1023)
  valor = map(valor, 0, 1023, 0, 180);     // converte os valores para a escala do servo motor (valores entre 0-180)
  meuservo.write(valor);                 // aciona o servo motor na posição valor
  delay(15);                           	// delay para esperar o servo chegar na posição. 
}