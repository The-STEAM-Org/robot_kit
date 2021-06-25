#include "./Robot.h"
#include "Arduino.h"
#include "./Ultrasonic.h"
#include "./Motor.h"

Robot::Robot(Ultrasonic usFront, Ultrasonic usBack, Motor motorLeft, Motor motorRight) {
  _usFront = usFront;
  _usBack = usBack;
  _motorLeft = motorLeft;
  _motorRight = motorRight;
}

// Update this method to program your robot!
void Robot::drive() {
  
}
