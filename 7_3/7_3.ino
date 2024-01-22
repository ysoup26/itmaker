#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(8, 3, NEO_GRB);
int count = 0;  // 터치횟수

void setup() {
  Serial.begin(9600);
  RGB_LED.begin();
  RGB_LED.setBrightness(50);
  RGB_LED.clear();
  attachInterrupt(0, Touch, FALLING);  //인터럽트0은 UNO보드의 2번핀
}

void Touch(){
  if(count>=3){count=0;}
  count = count + 1;
  Serial.print("터치횟수:");
  Serial.println(count);
}

void loop() {
  if(count == 1){
    for(int i=0; i<8; i++){
      RGB_LED.setPixelColor(i, 255, 0, 0);
      RGB_LED.show();
    }
  }
  else if(count == 2){
    for(int i=0; i<8; i++){
      RGB_LED.setPixelColor(i, 0, 255, 0);
      RGB_LED.show();
    }
  }
  else if(count == 3){
    for(int i=0; i<8; i++){
      RGB_LED.setPixelColor(i, 0, 0, 255);
      RGB_LED.show();
    }
  }
}
