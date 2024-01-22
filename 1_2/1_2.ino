int age = 15; // age라는 변수에 15 저장

// 1번만 실행
void setup() {
  Serial.begin(9600); // 9600보드레이트로 통신
}

// 무한 반복
void loop() {
  // 시리얼 모니터에 출력
  Serial.print("나이:");
  Serial.println(age);   // age라는 변수에 저장된 값 출력
  delay(2000);           // 2초 기다림
}
