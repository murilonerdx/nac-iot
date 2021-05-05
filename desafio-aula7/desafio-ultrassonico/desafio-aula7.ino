#include <Ultrasonic.h>
#include <Servo.h> 

HC_SR04 sensor1(4,5);
int MAX_DISTANCIA;
Servo servo; 

void setup() {
  Serial.begin(9600);
  servo.attach(9);
}

void loop() {
  Serial.println(String("Distance: ") + sensor1.distance() +String(" cm"));
  
  delay(300);
}
