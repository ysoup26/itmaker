
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(8, 3, NEO_GRB);

void setup(){
  RGB_LED.begin();  
  RGB_LED.clear();
}

void loop(){
  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, RGB_LED.Color(255, 255, 255));
    RGB_LED.setBrightness(0);
    RGB_LED.show();
  }
  delay(1000);

  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, RGB_LED.Color(255, 255, 255));
    RGB_LED.setBrightness(50);
    RGB_LED.show();
  }
  delay(1000);

  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, RGB_LED.Color(255, 255, 255));
    RGB_LED.setBrightness(100);
    RGB_LED.show();
  }
  delay(1000);

  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, RGB_LED.Color(255, 255, 255));
    RGB_LED.setBrightness(150);
    RGB_LED.show();
  }
  delay(1000);

  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, RGB_LED.Color(255, 255, 255));
    RGB_LED.setBrightness(200);
    RGB_LED.show();
  }
  delay(1000);

  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, RGB_LED.Color(255,255 , 255));
    RGB_LED.setBrightness(255);
    RGB_LED.show();
  }
  delay(1000);
}
