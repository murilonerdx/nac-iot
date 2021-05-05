#include <Servo.h>
#include <Ultrasonic.h>
#include <Servo.h> 

HC_SR04 sensor1(0,1);
HC_SR04 sensor2(2,3);

		//importa a biblioteca do servo motor

Servo servo1; 
Servo servo2; 		// cria o objeto meuservo
int pos =0;
int MAX_DISTANCIA;
int MAX_CAPSULA;
  			// variavel que vai receber o valor lido do potenciometro

void setup() {
  servo1.attach(9);  // configura o pino 9 do arduino para o servo motor
  servo2.attach(10);
  Serial.begin(9600);
}

void loop() {
  Serial.println(String("Recipiente: ") + sensor1.distance() +String(" cm | Capsula: ") + sensor2.distance() + String(" cm"));
  MAX_DISTANCIA = sensor1.distance();
  MAX_CAPSULA = sensor2.distance();

	
		if(MAX_DISTANCIA <= 100){
    			servo1.write(180);
  		}else if(MAX_CAPSULA <= 100){
    			servo2.write(180);			
  		}else{
			servo1.write(0);
			servo2.write(0);
		}
	

  
  
  delay(300);
}