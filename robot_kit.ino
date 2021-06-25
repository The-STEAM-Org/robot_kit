#include "Robot.h"
#include "UltrasonicSensor.h"
#include "Motor.h"

// Define pins
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
UltrasonicSensor frontUS(frontUSTrig, frontUSEcho);
UltrasonicSensor backUS(backUSTrig, backUSEcho);

Motor leftMotor(leftMotorEnable, leftMotorSwitch1, leftMotorSwitch2);
Motor rightMotor(rightMotorEnable, rightMotorSwitch1, rightMotorSwitch2);

Robot robot(frontUS, backUS, leftMotor, rightMotor);

void setup() {
    Serial.begin(9600);
}

void loop() {
    robot.drive();
}