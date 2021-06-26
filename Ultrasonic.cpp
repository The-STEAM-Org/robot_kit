#include "Ultrasonic.h"
#include "Arduino.h"

Ultrasonic::Ultrasonic(u_int8_t trig, u_int8_t echo)
{
  _trig = trig;
  _echo = echo;

  // Setup pins
  pinMode(_trig, OUTPUT);
  pinMode(_echo, OUTPUT);
}

Ultrasonic::Ultrasonic()
{
  Serial.printf("DO NOT USE THIS CONSTRUCTOR!");
  return;
}

int Ultrasonic::getDistance()
{
  digitalWrite(_trig, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trig, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  long duration = pulseIn(_echo, HIGH);

  // Calculating the distance
  int distance = duration * 0.034 / 2;

  return distance;
}
