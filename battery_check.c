#include "battery_check.h"
#include "language_support.h"

// Check if temperature is out of range
int isTemperatureOutOfRange(float temperature) {
    return (temperature < 0 || temperature > 45);
}

// Check if state of charge is out of range
int isSocOutOfRange(float soc) {
    return (soc < 20 || soc > 80);
}

// Check if charge rate is out of range
int isChargeRateOutOfRange(float chargeRate) {
    return (chargeRate > 0.8);
}

// Check if battery is okay and print messages in selected language
int batteryIsOk(float temperature, float soc, float chargeRate, int lang) {
    if (isTemperatureOutOfRange(temperature)) {
        printf("%s\n", getTemperatureOutOfRangeMessage(lang));
        return 0;
    }
    if (isSocOutOfRange(soc)) {
        printf("%s\n", getSocOutOfRangeMessage(lang));
        return 0;
    }
    if (isChargeRateOutOfRange(chargeRate)) {
        printf("%s\n", getChargeRateOutOfRangeMessage(lang));
        return 0;
    }
    return 1;
}
