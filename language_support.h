// language_support.h

#ifndef LANGUAGE_SUPPORT_H
#define LANGUAGE_SUPPORT_H

// Define languages
typedef enum {
    LANG_ENGLISH,
    LANG_GERMAN,
    // Add more languages here in the future
    LANG_COUNT
} Language;

// Global variable to hold the current language
extern Language currentLanguage;

// Function to print messages based on index
void printLocalizedMessage(int messageIndex);

#endif // LANGUAGE_SUPPORT_H
