#include "Arduino.h"
#include "VLUAVG.h"

VLUAVG::VLUAVG() {
  _tempIndex = 0;
  _humIndex = 0;
}

void VLUAVG::addTemperature(float temp) {
  _temperature[_tempIndex] = temp;
  _tempIndex = (_tempIndex + 1) % 10;
}

void VLUAVG::addHumidity(float hum) {
  _humidity[_humIndex] = hum;
  _humIndex = (_humIndex + 1) % 10;
}

float VLUAVG::averageTemperature() {
  float sum = 0;
  for(int i = 0; i < 10; i++) {
    sum += _temperature[i];
  }
  return sum / 10.0;
}

float VLUAVG::averageHumidity() {
  float sum = 0;
  for(int i = 0; i < 10; i++) {
    sum += _humidity[i];
  }
  return sum / 10.0;
}
