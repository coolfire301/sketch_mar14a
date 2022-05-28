#include <Servo.h>

Servo myServo;


int const potPin = A0;
int potVal;
int angle;


void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(100);
  delay(1000);
  myServo.write(0);
}
