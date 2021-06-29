#include "Robot.h"

// Define pins
// TODO: CHANGE THESE VALUES
#define leftMotorEnable 0
#define leftMotorSwitch1 0
#define leftMotorSwitch2 0

#define rightMotorEnable 0
#define rightMotorSwitch1 0
#define rightMotorSwitch2 0

#define frontUSTrig 0
#define frontUSEcho 0

#define backUSTrig 0
#define backUSEcho 0

// Create objects
Ultrasonic frontUS(frontUSTrig, frontUSEcho);
Ultrasonic backUS(backUSTrig, backUSEcho);

Motor leftMotor(leftMotorEnable, leftMotorSwitch1, leftMotorSwitch2);
Motor rightMotor(rightMotorEnable, rightMotorSwitch1, rightMotorSwitch2);

Robot robot(leftMotor, rightMotor, frontUS, backUS);

void setup() { Serial.begin(9600); }

void loop() { robot.drive(); }
