#ifndef INCLUDE_SENSOR_SENSOR_H__
#define INCLUDE_SENSOR_SENSOR_H__
#include <Arduino.h>

#define pin_s0 3
#define pin_s1 2
#define pin_s2 A5
#define pin_s3 A4
#define pin_out A2

void setup_sensor_pins() {
  pinMode(pin_s0, OUTPUT);
  pinMode(pin_s1, OUTPUT);
  pinMode(pin_s2, OUTPUT);
  pinMode(pin_s3, OUTPUT);
  // pinMode(pin_out, INPUT);
}

void set_sensor_frequency_scale() {
  digitalWrite(pin_s0, HIGH);
  digitalWrite(pin_s1, LOW);
}

#endif // INCLUDE_SENSOR_SENSOR_H__
