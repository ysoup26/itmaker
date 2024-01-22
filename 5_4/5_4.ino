

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel RGB_LED = Adafruit_NeoPixel(8, 3, NEO_RGB);

int trigPin = 10;                                     // 변수 tringPin 디지털 10번으로 지정
int echoPin = 12;                                     // 변수 echoPin 디지털 12번으로 지정
 
void setup(){
  Serial.begin(9600);             
  RGB_LED.begin();
  RGB_LED.clear();
  RGB_LED.setBrightness(50);
  pinMode(echoPin, INPUT);                             // echoPin 입력으로 지정  
  pinMode(trigPin, OUTPUT);                            // trigPin 출력으로 지정
}   
void loop(){
  long duration, distance;                              // 변수 duration, distance 지정
  digitalWrite(trigPin, HIGH);                          // trigPin에서 초음파 발생(echoPin도 HIGH)        
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH);                    // echoPin 이 HIGH를 유지한 시간을 저장 한다.
  distance = ((float)(340 * duration) / 1000) / 2; 

  Serial.print("Distance:");                            // 물체와 초음파 센서간 거리를 표시        
  Serial.print(distance);
  Serial.println("mm\n");

  if(distance < 50){
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 0, 255, 0);}
  }
  else if(distance < 100){
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 255, 0, 0);}
  }
  else if(distance < 150){
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 0, 0, 255);}
  }
  else{
    for(int i=0; i<8; i++){RGB_LED.setPixelColor(i, 0, 0, 0);}
  }
  RGB_LED.show();
}     
