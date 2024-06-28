#include <stdio.h>
#include <assert.h>
 
int isTemperatureOk(float temperature) {
  return (temperature >= 0 && temperature <= 45) ? 1 : (printf("Temperature out of range!\n"), 0);
}
 
int isSocOk(int soc) {
  return (soc >= 20 && soc <= 80) ? 1 : (printf("State of Charge out of range!\n"), 0);
}
 
int isChargeRateOk(float chargeRate) {
  return (chargeRate <= 0.8) ? 1 : (printf("Charge Rate out of range!\n"), 0);
}
 
int batteryIsOk(float temperature, int soc, float chargeRate) {
  return isTemperatureOk(temperature) &&
         isSocOk(soc) &&
         isChargeRateOk(chargeRate);
}
 
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
  return 0;
}

has context menu

