#include "battery_check.h"
#include "language_support.h"

int isTemperatureOk(float temperature) {
  return (temperature >= 0 && temperature <= 45) || (printf("Temperature out of range!\n"), 0);
}
 
int isSocOk(int soc) {
  return (soc >= 20 && soc <= 80) || (printf("State of Charge out of range!\n"), 0);
}
 
int isChargeRateOk(float chargeRate) {
  return (chargeRate <= 0.8) || (printf("Charge Rate out of range!\n"), 0);
}
 
int batteryIsOk(float temperature, int soc, float chargeRate) {
  return isTemperatureOk(temperature) &&
         isSocOk(soc) &&
         isChargeRateOk(chargeRate);
}
