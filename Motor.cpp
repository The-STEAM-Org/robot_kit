#include "Motor.h"

Motor::Motor(u_int8_t enb, u_int8_t switch1, u_int8_t switch2, bool reversed) {
    _reversed = reversed;
    _enb = enb;
    _switch1 = switch1;
    _switch2 = switch2;
    pinMode(_enb, OUTPUT);
    pinMode(_switch1, OUTPUT);
    pinMode(_switch2, OUTPUT);
}

void Motor::setSpeed(int speed) {
    // Check if speed is in range of [-100, 100]
    if(speed < -100 || speed > 100) {
        Serial.println("Invalid speed!");
        return;
    }

    // Set H-Bridge polarity
    if(speed > 0 && !_reversed) {
        digitalWrite(_switch1, HIGH);
        digitalWrite(_switch2, LOW);
    } else {
        digitalWrite(_switch1, LOW);
        digitalWrite(_switch2, HIGH);
    }

    // Set speed positive
    speed = speed < 0 ? speed * -1 : speed;

    // get enb pwm
    int pwm = map(speed, 0, 100, 0, 255);
    analogWrite(_enb, pwm);
}

void Motor::stop() {
    // Set both H-Bridge switches to off
    digitalWrite(_switch1, LOW);
    digitalWrite(_switch2, LOW);
}
