#ifndef MOTOR_H
#define MOTOR_H

#include "Arduino.h"

class Motor {
    public:
        Motor(u_int8_t enb, u_int8_t switch1, u_int8_t switch2, bool reversed=false);
        void setSpeed(int speed);
        void stop();
    private:
        bool _reversed;
        u_int8_t _enb;
        u_int8_t _switch1;
        u_int8_t  _switch2;
};


#endif
