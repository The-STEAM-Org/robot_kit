#ifndef Motor_h
#define Motor_h

#include "Arduino.h"
#include "Motor.h"

class Motor
{
public:
    Motor(uint8_t enable, uint8_t input1, uint8_t input2);
    Motor();
    void setSpeed(float speed);

private:
    // This pin turns the motor on at full speed. Using a PWM pin allows us to change the speed of the motor
    uint8_t _enable;
    // Inputs for switches of H-Bridge to change direction of the motor
    uint8_t _input1;
    uint8_t _input2;
};

#endif