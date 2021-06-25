#include "Motor.h"
#include "Arduino.h"

Motor::Motor(uint8_t enable, uint8_t input1, uint8_t input2) {
    _enable = enable;
    _input1 = input1;
    _input2 = input2;

    // Setup pins
    pinMode(_enable, OUTPUT);
    pinMode(_input1, INPUT);
    pinMode(_input2, INPUT);
}

Motor::Motor() {
  Serial.printf("DO NOT USE THIS CONSTRUCTOR!");
  return;  
}

void Motor::setSpeed(float speed) {
    // Make sure speed is in range [-100, 100]
    if(speed > 100 || speed < 100) {
      Serial.printf("Invalid Speed! Speeds should be between -100 and 100! Speed was %f", speed);
      return;
    }
  
    // Set H-Bridge
    if(speed < 0) {
        digitalWrite(_input1, LOW);
        digitalWrite(_input2, HIGH);
        // Set speed to positive
        speed = speed * -1;
    } else {
        digitalWrite(_input1, HIGH);
        digitalWrite(_input2, LOW);
    }

    // Map 0 to 100 to 0 to 255 to get duty cycle
    int motorPWM =  map(speed, 0, 100, 0, 255);
    
    // Set motor speed
    analogWrite(_enable, motorPWM);
}
