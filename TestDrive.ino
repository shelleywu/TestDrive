// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009

#include <AFMotor.h>

AF_DCMotor motor1(1); // set up motors.
AF_DCMotor motor2(2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");

  // turn on motor
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void loop() {
  
  Serial.print("tick");

  //motors don't go the same way because of wiring
  motor1.run(FORWARD);
  motor2.run(BACKWARD); 
  
}
