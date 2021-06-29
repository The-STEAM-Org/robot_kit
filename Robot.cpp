#include "Robot.h"

Robot::Robot(Motor &leftMotor, Motor &rightMotor, Ultrasonic &frontUltrasonic,
             Ultrasonic &backUltrasonic)
    : leftMotor(leftMotor), rightMotor(rightMotor),
      frontUltrasonic(frontUltrasonic), backUltrasonic(backUltrasonic) {}

void Robot::drive() {
  Serial.printf("Distance is %f\n", frontUltrasonic.getDistance());
}
