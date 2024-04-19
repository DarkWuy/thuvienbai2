#ifndef VLUAVG_h
#define VLUAVG_h

#include "Arduino.h"

class VLUAVG {
  public:
    VLUAVG();
    void addTemperature(float temp);
    void addHumidity(float hum);
    float averageTemperature();
    float averageHumidity();
  private:
    float _temperature[10];
    float _humidity[10];
    int _tempIndex;
    int _humIndex;
};

#endif
