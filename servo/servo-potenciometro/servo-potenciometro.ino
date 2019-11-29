#include <Servo.h>

Servo myServo;

#define potpin A0

int val;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 179);
  myServo.write(val);
  delay(15);
}
