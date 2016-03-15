// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009

#include <AFMotor.h> //read the README to get this

AF_DCMotor motor1(1); // set up motors.
AF_DCMotor motor2(2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");

  // turn on motor
  motor1.setSpeed(255); //set the speed for the motors. This is already max speed.
  motor2.setSpeed(255);
}

void loop() {

  //motors don't go the same way because of wiring
  motor1.run(FORWARD);
  motor2.run(BACKWARD); 
  
}
