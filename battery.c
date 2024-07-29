#include <stdio.h>
#include "battery.h"

int isTemperatureOk(float temperature) {
  return (temperature >= 0 && temperature <= 45);
}

int isSocOk(float soc) {
  return (soc >= 20 && soc <= 80);
}

int isChargeRateOk(float chargeRate) {
  return (chargeRate <= 0.8);
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(!isTemperatureOk(temperature)) {
    printf("Temperature out of range!\n");
    return 0;
  }
  if(!isSocOk(soc)) {
    printf("State of Charge out of range!\n");
    return 0;
  }
  if(!isChargeRateOk(chargeRate)) {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  return 1;
}


