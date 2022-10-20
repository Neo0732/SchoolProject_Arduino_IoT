#include <SoftwareSerial.h> //시리얼함수 통신 포함

#define BTtx 2 // 블루투스 통신포트 설정
#define BTrx 3 // 블루투스 통신포트 설정
#define Room_A_LED 4 // LED를 4,5번 pin에 배정


SoftwareSerial BT(BTtx, BTrx); // 통신함수 객체

void setup() {
 BT.begin (9600); 
 pinMode(Room_A_LED, OUTPUT);

}

void loop() {
  if(BT.available()>0) {
    char c=BT.read();
    switch(c) {
      case 'a':
      digitalWrite(Room_A_LED, HIGH);
      break;
      case 'b':
      digitalWrite(Room_A_LED, LOW);
      break;
    }
  }

}
