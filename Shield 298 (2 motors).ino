int ENA = 3;//pin 3  connect pin mark (~)
int IN1 = 9;//pin 9 motor1
int IN2 = 10;//pin 10 motor1
int IN3 = 11;//pin 11 motor2
int IN4 = 12;//pin 12 motor2
int ENB = 5;//pin 5  connect pin mark (~)

void setup() {
   
pinMode(ENA, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(ENB, OUTPUT);

analogWrite(ENA, 150);//speed motor1 0 : 255
analogWrite(ENB, 150);//speed motor2 0 : 255
}

void loop() {

// motor direction 1 & 2
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
    delay(5000);

// stop motor 1 & 2
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
  delay(5000);

//another direction motor 1 & 2
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
delay(5000);

}

