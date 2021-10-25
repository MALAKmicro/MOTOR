#include <Servo.h> // library servo
 
Servo servo1;// change name servo



void setup() {
  
 servo1.attach(7);// pin 7
}

void loop() {

servo1.write(0);// position (0°)
delay(5000);//5 seconds

servo1.write(90);//position (90°)
delay(5000);//5 seconds

servo1.write(180);// position (180°)
delay(5000);5 seconds
}

