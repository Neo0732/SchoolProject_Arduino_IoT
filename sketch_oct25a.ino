#include <SoftwareSerial.h> //시리얼함수 통신 포함

#define BTtx 2 // 블루투스 통신포트 설정
#define BTrx 3 // 블루투스 통신포트 설정

#define Room_Livingroom 5 // 거실 LED를 5번 pin에 배정
#define Room_TV 6 // TV LED를 6번 pin에 배정
#define Room_Kitchen 7 // 주방 LED를 7번 pin에 배정
#define Room_AC 8 // AC LED를 8번 pin에 배정


SoftwareSerial BT(BTtx, BTrx); // 통신함수 객체

void setup() {
 BT.begin (9600); 
 pinMode(Room_Livingroom, OUTPUT);
 pinMode(Room_Kitchen, OUTPUT);
 pinMode(Room_TV, OUTPUT);
 pinMode(Room_AC, OUTPUT);

}

void loop() {
  if(BT.available()>0) {
    char c=BT.read();
    switch(c) {
      case '0':
      digitalWrite(Room_Livingroom, HIGH);
      digitalWrite(Room_Kitchen, HIGH);
      digitalWrite(Room_TV, HIGH);
      digitalWrite(Room_AC, HIGH);
      break;
      case '1':
      digitalWrite(Room_Livingroom, LOW);
      digitalWrite(Room_Kitchen, LOW);
      digitalWrite(Room_TV, LOW);
      digitalWrite(Room_AC, LOW);
      break;
      case 'L':
      digitalWrite(Room_Livingroom, HIGH);
      break;
      case 'l':
      digitalWrite(Room_Livingroom, LOW);
      break;
      case 'K':
      digitalWrite(Room_Kitchen, HIGH);
      break;
      case 'k':
      digitalWrite(Room_Kitchen, LOW);
      break;
      case 'T':
      digitalWrite(Room_TV, HIGH);
      break;
      case 't':
      digitalWrite(Room_TV, LOW);
      break;
      case 'A':
      digitalWrite(Room_AC, HIGH);
      break;
      case 'a':
      digitalWrite(Room_AC, LOW);
      break;
    }
  }

} 
