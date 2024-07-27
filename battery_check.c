#include "battery_check.h"
#include "language_support.h"

int isTemperatureOk(float temperature, int lang) {
    if (temperature < 0 || temperature > 45) {
        printf("%s\n", getTemperatureOutOfRangeMessage(lang));
        return 0; // Not okay
    }
    return 1; // Okay
}

int isSocOk(int soc, int lang) {
    if (soc < 20 || soc > 80) {
        printf("%s\n", getSocOutOfRangeMessage(lang));
        return 0; // Not okay
    }
    return 1; // Okay
}

int isChargeRateOk(float chargeRate, int lang) {
    if (chargeRate > 0.8) {
        printf("%s\n", getChargeRateOutOfRangeMessage(lang));
        return 0; // Not okay
    }
    return 1; // Okay
}

// Main battery check function
int batteryIsOk(float temperature, int soc, float chargeRate, int lang) {
    return isTemperatureOk(temperature, lang) &&
           isSocOk(soc, lang) &&
           isChargeRateOk(chargeRate, lang);
}
