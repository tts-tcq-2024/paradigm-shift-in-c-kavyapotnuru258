// battery_checks.c

#include "battery_checks.h"
#include "language_support.h"
#include <stdio.h>

// Check functions for battery parameters
int checkTemperature(float temperature) {
    return (temperature >= 0 && temperature <= 45);
}

int checkSoc(float soc) {
    return (soc >= 20 && soc <= 80);
}

int checkChargeRate(float chargeRate) {
    return (chargeRate <= 0.8);
}

int validateBatteryStatus(float temperature, float soc, float chargeRate) {
    BatteryCheck checks[] = {
        {checkTemperature, temperature, 0}, // 0: Index for temperature message
        {checkSoc, soc, 1},                  // 1: Index for SOC message
        {checkChargeRate, chargeRate, 2}    // 2: Index for charge rate message
    };

    for (int i = 0; i < sizeof(checks) / sizeof(checks[0]); ++i) {
        if (!checks[i].validate(checks[i].value)) {
            printLocalizedMessage(checks[i].messageIndex);
            return 0;
        }
    }

    return 1;
}
