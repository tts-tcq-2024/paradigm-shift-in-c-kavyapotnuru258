// #ifndef BATTERY_CHECK_H
// #define BATTERY_CHECK_H

// // Function prototypes
// int isTemperatureOutOfRange(float temperature);
// int isSocOutOfRange(float soc);
// int isChargeRateOutOfRange(float chargeRate);
// int batteryIsOk(float temperature, float soc, float chargeRate, int lang);

// #endif // BATTERY_CHECK_H
#ifndef BATTERY_CHECK_H
#define BATTERY_CHECK_H

// Function prototypes
int isTemperatureOk(float temperature);
int isSocOk(float soc);
int isChargeRateOk(float chargeRate);
int batteryIsOk(float temperature, float soc, float chargeRate);

#endif // BATTERY_CHECK_H
