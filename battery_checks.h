// battery_checks.h

#ifndef BATTERY_CHECKS_H
#define BATTERY_CHECKS_H

// Function prototypes for various battery checks
int checkTemperature(float temperature);
int checkSoc(float soc);
int checkChargeRate(float chargeRate);

// Define Check structure for battery validation
typedef struct {
    int (*validate)(float);  // Function pointer for validation
    float value;             // Value to be validated
    int messageIndex;        // Index for localized message
} BatteryCheck;

// Function to validate battery status
int validateBatteryStatus(float temperature, float soc, float chargeRate);

#endif // BATTERY_CHECKS_H
