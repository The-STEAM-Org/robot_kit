#if !defined(Robot_h)
#define Robot_h


#include "Arduino.h"
#include "UltrasonicSensor.h"
#include "Motor.h"

class Robot {
    public:
        Robot(
            UltrasonicSensor front, 
            UltrasonicSensor back, 
            Motor left, 
            Motor right
            );

        // Up to you to make!
        void drive();
    private:
        UltrasonicSensor _frontUS;
        UltrasonicSensor _backUS;
        Motor _leftMotor;
        Motor _rightMotor;
};
#endif // Robot_h