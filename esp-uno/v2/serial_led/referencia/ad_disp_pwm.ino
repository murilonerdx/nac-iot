#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define SCREEN_ADDRESS 0x3C  //talvez seja 0x3C

Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT);
String value;
void setup(){
  pinMode(11,OUTPUT);
  Serial.begin(115200);


  //config do display OLED
  oled.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  oled.clearDisplay();

}



void loop(){

  

// escrevendo no display oled
	char dado;
	int valor;
	
		dado = Serial.read();
		
		if(dado == 'A'){
			valor = Serial.parseInt();
			Serial.print(valor);
			oled.clearDisplay();
  			oled.setTextSize(1); // Draw 2X-scale text
  			oled.setTextColor(SSD1306_WHITE);
  			oled.setCursor(10, 0);
 			oled.print("Pot: A");oled.println(valor);
  			oled.display();      // Show initial text


 			delay(100);
		}
		if(dado == 'B'){
			
			if(dado == 'B'){
				valor = Serial.parseInt();
				oled.clearDisplay();
  				oled.setTextSize(1); // Draw 2X-scale text
  				oled.setTextColor(SSD1306_WHITE);
  				oled.setCursor(10, 0);
 				oled.print("Pot: B");oled.println(valor);
  				oled.display();      // Show initial text


 				delay(100);
			}

		}
	
  

}