#include <Servo.h>//library servo

Servo servo1;//change servo name

int pos = 0;//variable definition

void setup() {

servo1.attach(7);//pin 7
  
}

void loop() {

//Use the for . function
for(pos = 0; pos < 180; pos += 1){

servo1.write(pos);//servo position
delay(20);}//20 milliseconds

//Use the for . function
for(pos = 180; pos>0; pos -=1){

servo1.write(pos);//servo position
delay(20);}//20 milliseconds

}

