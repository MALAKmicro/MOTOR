#include <Servo.h>//library servo

Servo servo1;//change servo name

int pos = 0;//variable definition

int BUTTON1 = 8;//define button1
int BUTTON2 = 9;//define button2

void setup() {

pinMode(BUTTON1, INPUT);
pinMode(BUTTON2, INPUT);
servo1.attach(7);//pin 7

}

void loop() {

if(digitalRead(BUTTON1)==HIGH)//read button1
{
if(pos>0){// 180° : 0°
pos--;//pos -1
}
servo1.write(pos);//position servo
delay(20);}// 20 milliseconds


if(digitalRead(BUTTON2)==HIGH)//read button2
{
if(pos<180){// 0° : 180°
pos++;//pos +1
}
servo1.write(pos);//position servo
delay(20);}// 20 milliseconds
  
}

