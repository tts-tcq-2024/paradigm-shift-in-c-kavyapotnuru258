// #ifndef LANGUAGE_H
// #define LANGUAGE_H
// #include <stdio.h>

// // Enum for supported languages
// typedef enum {
//             ENGLISH,
//             GERMAN,
//     // Add more languages here
//              COUNT // This should always be the last item
// } Language;

// // Function prototypes
// const char* getTemperatureOutOfRangeMessage(Language lang);
// const char* getSocOutOfRangeMessage(Language lang);
// const char* getChargeRateOutOfRangeMessage(Language lang);

// #endif // LANGUAGE_H
#ifndef LANGUAGE_H
#define LANGUAGE_H
#include <stdio.h>

// Enum for supported languages
typedef enum {
    ENGLISH,
    GERMAN,
    // Add more languages here
    COUNT // This should always be the last item
} Language;

// Function prototypes
void setPreferredLanguage(Language lang);
const char* getTemperatureOutOfRangeMessage();
const char* getSocOutOfRangeMessage();
const char* getChargeRateOutOfRangeMessage();

#endif // LANGUAGE_H

