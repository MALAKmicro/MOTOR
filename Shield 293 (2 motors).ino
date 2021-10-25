#include <AFMotor.h>//library shield 293

AF_DCMotor motor1(1);
AF_DCMotor motor3(3);

void setup() {

motor1.setSpeed(255);//max speed motor1 255
motor1.run(RELEASE);//stop motor1
motor3.setSpeed(255);//max speed motor3 255
motor3.run(RELEASE);//stop motor3
}

void loop() {

motor1.run(FORWARD);//Motor1 direction
motor3.run(FORWARD);//Motor3 direction
 delay(5000);//5 seconds

motor1.run(RELEASE);//motor1 stop or break
motor3.run(RELEASE);//motor3 stop or break
delay(5000);//5 seconds

motor1.run(BACKWARD);//Motor1 direction
motor3.run(BACKWARD);//Motor3 direction
delay(5000);//5 seconds

}

