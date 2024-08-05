// #include "battery_check.h"
// #include "language_support.h"

// int isTemperatureOk(float temperature, int lang) {
//     if (temperature < 0 || temperature > 45) {
//         printf("%s\n", getTemperatureOutOfRangeMessage(lang));
//         return 0; // Not okay
//     }
//     return 1; // Okay
// }

// int isSocOk(float soc, int lang) {
//     if (soc < 20 || soc > 80) {
//         printf("%s\n", getSocOutOfRangeMessage(lang));
//         return 0; // Not okay
//     }
//     return 1; // Okay
// }

// int isChargeRateOk(float chargeRate, int lang) {
//     if (chargeRate > 0.8) {
//         printf("%s\n", getChargeRateOutOfRangeMessage(lang));
//         return 0; // Not okay
//     }
//     return 1; // Okay
// }

// // Main battery check function
// int batteryIsOk(float temperature, float soc, float chargeRate, int lang) {
//     return isTemperatureOk(temperature, lang) &&
//            isSocOk(soc, lang) &&
//            isChargeRateOk(chargeRate, lang);
// }
#include "battery_check.h"
#include "language_support.h"

// Global language setting
Language currentLanguage = ENGLISH;

int isTemperatureOk(float temperature) {
    if (temperature < 0 || temperature > 45) {
        printf("%s\n", getTemperatureOutOfRangeMessage(currentLanguage));
        return 0; // Not okay
    }
    return 1; // Okay
}

int isSocOk(float soc) {
    if (soc < 20 || soc > 80) {
        printf("%s\n", getSocOutOfRangeMessage(currentLanguage));
        return 0; // Not okay
    }
    return 1; // Okay
}

int isChargeRateOk(float chargeRate) {
    if (chargeRate > 0.8) {
        printf("%s\n", getChargeRateOutOfRangeMessage(currentLanguage));
        return 0; // Not okay
    }
    return 1; // Okay
}

// Main battery check function
int batteryIsOk(float temperature, float soc, float chargeRate) {
    return isTemperatureOk(temperature) &&
           isSocOk(soc) &&
           isChargeRateOk(chargeRate);
}

