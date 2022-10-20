void setup() {
  pinMode(8, OUTPUT); //8번 포트를 OUTPUT 포트로
}

void loop() {
 digitalWrite(8,HIGH); //8번 포트의 전기를 HIGH/LOW로
 delay(100); //200ms 기다리기
 digitalWrite(8,LOW); //8번 포트의 전기를 HIGH/LOW로
 delay(100); //200ms 기다리기
}
