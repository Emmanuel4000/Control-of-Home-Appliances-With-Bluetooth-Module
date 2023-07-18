//Working on a bluetooth  module 
#include<SoftwareSerial.h>
const int rxPin = 9;// rxpin = 8 
const int txPin = 8;// txpin = 9
const int LED1 = 6;
const int LED2 = 4;
const int LED3 = 3;

SoftwareSerial BTSerial(rxPin,txPin) ;//rx,tx

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(rxPin, INPUT);
pinMode(txPin, OUTPUT);
BTSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(BTSerial.available()>0){
  char data = (char)BTSerial.read();
if(data=='L'){
  digitalWrite(LED1,HIGH);
}else{
  digitalWrite(LED1, LOW);
  }
if(data=='F'){
  digitalWrite(LED2,HIGH);
}
else{
  digitalWrite(LED2, LOW);
}
if(data=='K'){
  digitalWrite(LED3,HIGH);
}
else{
  digitalWrite(LED3, LOW);
}
if(data=='J'){
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
}
else{
  Serial.println("wrong input!");
}
}
}
