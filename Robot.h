#ifndef ROBOT_H
#define ROBOT_H

#include "Motor.h"
#include "Ultrasonic.h"

/**
 * The robot class has left and right motors and has front and back ultrasonic
 *sensors. Update the Robot::drive() method to change how the robot behaves.
 **/
class Robot {
public:
  Robot(Motor &leftMotor, Motor &rightMotor, Ultrasonic &frontUltrasonic,
        Ultrasonic &backUltrasonic);
  /**
   * Update this method to change how the robot behaves
   **/
  void drive();

private:
  Motor leftMotor, rightMotor;
  Ultrasonic frontUltrasonic, backUltrasonic;
};

#endif
