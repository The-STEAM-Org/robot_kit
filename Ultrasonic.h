/*
    Ultrasonic.h - Represents a ultrasonic sensor
    Created by Akshat Adsule for the STEAM org
*/


#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic {
    public:
        Ultrasonic(u_int8_t trig, u_int8_t echo);
        Ultrasonic();
        int getDistance();
    private:
        u_int8_t _trig;
        u_int8_t _echo;
};

#endif
