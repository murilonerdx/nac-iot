
int ledPin = 11;    

void setup() {
  pinMode(ledPin, OUTPUT);            
  Serial.begin(115200);          
}


void loop() {
 
  char letra;                 

  if(Serial.available() > 0){       
    letra = Serial.read();        
    Serial.print(letra);

    if (letra == 'L'){            
      digitalWrite(ledPin, HIGH);          
      delay(500);                          
    }

    if (letra == 'D'){           
      digitalWrite (ledPin, LOW);          
     delay(500);                            
    }

  }

}
