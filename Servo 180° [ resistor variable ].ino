#include<Servo.h>// library servo

Servo servo1;//change servo name

int pos =0;//variable definition

int ava = A0;//pin A0

void setup() {

servo1.attach(7);//pin 7
  
}

void loop() {

pos=analogRead(ava);//read resistor variable

pos = map(pos,0,1023,0,180);// 0 : 1023 & 0° : 180°

servo1.write(pos);//servo position

delay(20);// 20 milliseconds
  
}

