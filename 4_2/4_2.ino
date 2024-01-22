
void setup(){
  Serial.begin(9600);
}

void loop(){
  int potentiometer;  // 가변저항
  potentiometer = analogRead(A0);
  Serial.println(potentiometer);
  delay(10);
}
