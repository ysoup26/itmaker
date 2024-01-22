#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(8, 3, NEO_GRB);

void setup(){
  RGB_LED.begin();
  RGB_LED.clear();
}

void loop(){
  int cds = analogRead(A5);
  int light = map(cds, 125, 600, 0, 3);

  
  for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 255, 255, 255);}

  if(light == 0){RGB_LED.setBrightness(0);}
  else if(light == 1){RGB_LED.setBrightness(50);}
  else if(light == 2){RGB_LED.setBrightness(100);}
  else{RGB_LED.setBrightness(0);}
  RGB_LED.show();
  delay(1);
}
