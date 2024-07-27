#ifndef LANGUAGE_H
#define LANGUAGE_H
#include <stdio.h>

// Enum for supported languages
typedef enum {
    LANGUAGE_ENGLISH,
    LANGUAGE_GERMAN,
    // Add more languages here
    LANGUAGE_COUNT // This should always be the last item
} Language;

// Function prototypes
const char* getTemperatureOutOfRangeMessage(Language lang);
const char* getSocOutOfRangeMessage(Language lang);
const char* getChargeRateOutOfRangeMessage(Language lang);

#endif // LANGUAGE_H
