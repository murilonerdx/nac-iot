#include <Ultrasonic.h>

HC_SR04 sensor1(4,5); // (trigger, echo)

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(String("Distância: ") + sensor1.distance() +String(" cm"));
  delay(100);
}