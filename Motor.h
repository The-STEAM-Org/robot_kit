#ifndef MOTOR_H
#define MOTOR_H

#include "Arduino.h"

/**
 * This allows for control of a motor through a L298N module
 * <a
 *href="https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/">A
 *great explainer on how the l298N module works.</a>
 **/
class Motor {
public:
  /**
   * @param enb The PWM pin to enable the motor
   * @param switch1 One switch of the H-Bridge to control motor direction
   * @param switch2 One switch of the H-Bridge to control motor direction
   * @param reversed Indicates if the motor inputs should be reversed
   **/
  Motor(u_int8_t enb, u_int8_t switch1, u_int8_t switch2,
        bool reversed = false);

  /**
   * Sets the speed of the motor.
   * A negative speed indicates the motor going in the reverse direction.
   *
   * @warning Be vary of starting the motors from stop at speeds of 50 or below.
   *The robot may not move!
   *
   * @param speed The speed the motor should spin at as a value between -100 and
   *100
   **/
  void setSpeed(int speed);

  /**
   * Stops the motor by turning off both switches in the H-Bridge
   **/
  void stop();

private:
  bool _reversed;
  u_int8_t _enb;
  u_int8_t _switch1;
  u_int8_t _switch2;
};

#endif
