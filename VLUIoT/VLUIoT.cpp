#include "Arduino.h"
#include "VLUIoT.h"

VLUIoT::VLUIoT(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void VLUIoT::on(int duration) {
  digitalWrite(_pin, HIGH);
  delay(duration);
}

void VLUIoT::off(int duration) {
  digitalWrite(_pin, LOW);
  delay(duration);
}
