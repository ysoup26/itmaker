int touch; // 터치 상태

// 1번만 실행
void setup() {
  Serial.begin(9600); // 9600보드레이트로 통신
}

// 무한 반복
void loop() {
  touch = digitalRead(2);   // 2번핀에 연결된 센서값 읽어서 touch 변수에 저장

  if (touch == 1){          // touch 변수에 저장된 값이 1이라면
    Serial.println("ON");   // 시리얼 모니터에 "ON" 출력
  }
  else
  {
    Serial.println("OFF");  // 시리얼 모니터에 "OFF" 출력
  }
  delay(1000);              // 1초 기다림
}
