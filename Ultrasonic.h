#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include "Arduino.h"

/**
 * Allows to interface with a standard ultrasonic sensor
 **/
class Ultrasonic {
public:
  /**
   * @param trig The trig pin of the ultrasonic sensor
   * @param echo The echo pin of the ultrasonic sensor
   **/
  Ultrasonic(u_int8_t trig, u_int8_t echo);
  /**
   * Triggers the ir sensor and gets the distance recorded by it in centimeters
   *
   * @note The distance returned is in Centimeters
   *
   * @return The distance in centimeters
   **/
  int getDistance();

private:
  u_int8_t _trig;
  u_int8_t _echo;
};

#endif
