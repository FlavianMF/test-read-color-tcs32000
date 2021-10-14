#ifndef INCLUDE_DEBUG_H__
#define INCLUDE_DEBUG_H__
#include <Arduino.h>

int red_value = 0;
int blue_value = 0;
int green_value = 0;

void debug_colors_value() {
  Serial.print("[COLOR] ");
  Serial.print("Red: ");
  Serial.print(red_value);
  Serial.print("\tGreen: ");
  Serial.print(green_value);
  Serial.print("\tBlue: ");
  Serial.println(blue_value);
}

#endif // INCLUDE_DEBUG_H__
