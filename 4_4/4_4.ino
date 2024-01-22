
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(8, 3, NEO_RGB + NEO_KHZ800);

void setup(){
  Serial.begin(9600);
  RGB_LED.begin();
  RGB_LED.show();
}

void loop(){
  int poten = analogRead(A0);
  poten = map(poten, 0, 1023, 0, 4); 
  Serial.println(poten);

  if(poten == 0){
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 0, 0, 0);}
  }
  else if(poten == 1){
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 255, 0, 0);}
  }
  else if(poten == 2){
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 0, 255, 0);}
  }
  else if(poten == 3){
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 0, 0, 255);}
  }
  else{
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 255, 255, 255);}
  }
  RGB_LED.show();
}
