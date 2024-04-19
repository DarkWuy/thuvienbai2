#ifndef VLUIoT_h
#define VLUIoT_h

#include "Arduino.h"

class VLUIoT {
  public:
    VLUIoT(int pin);
    void on(int duration);
    void off(int duration);
  private:
    int _pin;
};

#endif
