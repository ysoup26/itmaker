
int trigPin = 10;                                     // 변수 tringPin 디지털 10번으로 지정
int echoPin = 12;                                     // 변수 echoPin 디지털 12번으로 지정
 
void setup(){
  Serial.begin(9600);             
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
 
  delay(500);                                           // 루프문은 0.5초(500ms) 마다 동작
 
}     
