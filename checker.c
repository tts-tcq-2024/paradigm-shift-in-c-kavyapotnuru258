#include "battery_checks.h"
#include "language_support.h"
#include <assert.h>

int main() {
    // Set language to German
    currentLanguage = LANG_GERMAN;

    // Test cases
    assert(!validateBatteryStatus(50, 85, 0.9)); // Should print the German message

    // Switch to English and test again
    currentLanguage = LANG_ENGLISH;
    assert(validateBatteryStatus(25, 70, 0.7)); // Should pass without printing messages
    assert(!validateBatteryStatus(50, 85, 0)); // Should print the English message

    return 0;
}
