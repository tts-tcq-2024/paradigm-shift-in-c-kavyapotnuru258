#include "language_support.h"

// Message arrays for each language
const char* messages[COUNT][3] = {
    [ENGLISH] = {
        "Temperature out of range!",
        "State of Charge out of range!",
        "Charge Rate out of range!"
    },
    [GERMAN] = {
        "Temperatur außerhalb des Bereichs!",
        "Ladezustand außerhalb des Bereichs!",
        "Laderate außerhalb des zulässigen Bereichs!"
    }
    // Add more languages here
};

// Message retrieval functions
const char* getTemperatureOutOfRangeMessage(Language lang) {
    return messages[lang][0];
}

const char* getSocOutOfRangeMessage(Language lang) {
    return messages[lang][1];
}

const char* getChargeRateOutOfRangeMessage(Language lang) {
    return messages[lang][2];
}
