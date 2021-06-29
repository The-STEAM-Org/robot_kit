//
// Created by akshat on 6/28/21.
//

#ifndef ROBOT_H
#define ROBOT_H

#include "Motor.h"
#include "Ultrasonic.h"

class Robot {
public:
    Robot(Motor &leftMotor, Motor &rightMotor, Ultrasonic &frontUltrasonic, Ultrasonic &backUltrasonic);
    void drive();
private:
    Motor leftMotor, rightMotor;
    Ultrasonic frontUltrasonic, backUltrasonic;
};


#endif
