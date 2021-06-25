#ifndef Robot_h
#define Robot_h

#include "Arduino.h"
#include "Ultrasonic.h"
#include "Motor.h"

class Robot {
  public:
    Robot(Ultrasonic usFront, Ultrasonic usBack, Motor motorLeft, Motor motorRight);
    Robot();
    void drive();
  private:
    Ultrasonic _usFront, _usBack;
    Motor _motorLeft, _motorRight;
};

#endif
