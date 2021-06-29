#include "Robot.h"

// Define pins
// TODO: CHANGE THESE VALUES
#define leftMotorEnable D2
#define leftMotorSwitch1 D1
#define leftMotorSwitch2 D2

#define rightMotorEnable 0
#define rightMotorSwitch1 0
#define rightMotorSwitch2 0

#define frontUSTrig D7
#define frontUSEcho D6

#define backUSTrig D7
#define backUSEcho D6

// Create objects
Ultrasonic frontUS(frontUSTrig, frontUSEcho);
Ultrasonic backUS(backUSTrig, backUSEcho);

Motor leftMotor(leftMotorEnable, leftMotorSwitch1, leftMotorSwitch2);
Motor rightMotor(rightMotorEnable, rightMotorSwitch1, rightMotorSwitch2);

Robot robot(leftMotor, rightMotor, frontUS, backUS);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    robot.drive();
}
