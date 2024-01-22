
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(8, 3, NEO_GRB);

void setup(){
  RGB_LED.begin();
  RGB_LED.setBrightness(50);
  RGB_LED.clear();
}

void loop(){
  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, 255, 255, 255);
    RGB_LED.show();
  }
  delay(3000);
  
  for(int i=0; i<8; i++){
    RGB_LED.setPixelColor(i, 0, 0, 0);
    RGB_LED.show();
  }
  delay(3000);
}
