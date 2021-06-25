#include "Arduino.h"
#include "Robot.h"

Robot::Robot(UltrasonicSensor front, UltrasonicSensor back, Motor left, Motor right) {
    _frontUS = front;
    _backUS = back;
    _leftMotor = left;
    _rightMotor = right;
}

// Update this method to program your robot!
void Robot::drive() {}