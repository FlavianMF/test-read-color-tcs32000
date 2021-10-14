#include <Arduino.h>

int red_value = 0;
int blue_value = 0;
int green_value = 0;

#include "setup_sensor.hpp"
// #include "debug.hpp"

void debug_colors_value() {
  Serial.print("[COLOR] ");
  Serial.print("Red: ");
  Serial.print(red_value, DEC);
  Serial.print("\tGreen: ");
  Serial.print(green_value, DEC);
  Serial.print("\tBlue: ");
  Serial.println(blue_value, DEC);
}

void setup() {
  Serial.begin(9600);
  setup_sensor_pins();
  set_sensor_frequency_scale();
}

void loop() {
  digitalWrite(pin_s2, LOW);
  digitalWrite(pin_s3, LOW);
  delay(50);
  red_value = pulseIn(pin_out, LOW);

  digitalWrite(pin_s2, HIGH);
  digitalWrite(pin_s3, HIGH);
  delay(50);
  green_value = pulseIn(pin_out, LOW);

  digitalWrite(pin_s2, LOW);
  digitalWrite(pin_s3, HIGH);
  delay(50);
  blue_value = pulseIn(pin_out, LOW);

  debug_colors_value();
}