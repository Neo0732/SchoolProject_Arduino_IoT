#include <SoftwareSerial.h>

 #define TXPIN 2 //to TX of HC-06
 #define RXPIN 3 //to RX of HC-06

 SoftwareSerial BTSerial (TXPIN, RXPIN);
 
void setup() {
 Serial.begin(9600);
 BTSerial.begin(9600);
}

void loop() {
if (BTSerial.available()) {
  Serial.write(BTSerial.read());
 }
if (Serial.available()) {
  BTSerial.write(Serial.read());
 }
}
