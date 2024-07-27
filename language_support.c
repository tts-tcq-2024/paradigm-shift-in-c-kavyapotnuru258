// language_support.c

#include "language_support.h"
#include <stdio.h>

// Messages for each language
const char* localizedMessages[LANG_COUNT][3] = {
    [LANG_ENGLISH] = {
        "Temperature out of range!\n",
        "State of Charge out of range!\n",
        "Charge Rate out of range!\n"
    },
    [LANG_GERMAN] = {
        "Temperatur außerhalb des Bereichs!\n",
        "Ladezustand außerhalb des Bereichs!\n",
        "Ladegeschwindigkeit außerhalb des Bereichs!\n"
    }
    // Add more languages here
};

Language currentLanguage = LANG_ENGLISH;

void printLocalizedMessage(int messageIndex) {
    if (messageIndex >= 0 && messageIndex < 3) {
        printf("%s", localizedMessages[currentLanguage][messageIndex]);
    }
}
