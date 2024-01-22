// 1번만 실행
void setup() {
  Serial.begin(9600); // 9600보드레이트로 통신
  Serial.println("Hello World!");
}

// 무한 반복
void loop() {
  // 시리얼 모니터에 출력
  Serial.print("신짱구");
  Serial.println("신짱아");
  Serial.println("신형만");
  Serial.print("봉미선\n 흰둥이\n");
}
