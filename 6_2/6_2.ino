
int cds = A5;                 // 조도센서(cds) 변수에 핀 번호 지정

// 1번만 실행
void setup(){
  Serial.begin(9600);         // 9600 보드레이트로 통신
  pinMode(cds, INPUT);        // 조도센서를 입력(INPUT)으로 설정
}

// 무한 반복
void loop(){
  int val = analogRead(cds);  // 조도센서의 아날로그 값을 읽어서 저장
  Serial.print("cds_sensor");
  Serial.println(val);        // 조도센서 값 출력
  delay(200);                 // 0.2초 기다림
}
