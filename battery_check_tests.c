#include <stdio.h>
#include <assert.h>
#include "battery_check.h"
#include "language_support.h"

int main() {
    // Test with English messages
    assert(batteryIsOk(25, 70, 0.7, LANGUAGE_ENGLISH));
    assert(!batteryIsOk(50, 85, 0, LANGUAGE_ENGLISH));
    assert(!batteryIsOk(30, 85, 0, LANGUAGE_ENGLISH));
    assert(!batteryIsOk(25, 70, 0.9, LANGUAGE_ENGLISH));

    // Test with German messages
    assert(batteryIsOk(25, 70, 0.7, LANGUAGE_GERMAN));
    assert(!batteryIsOk(50, 85, 0, LANGUAGE_GERMAN));
    assert(!batteryIsOk(30, 85, 0, LANGUAGE_GERMAN));
    assert(!batteryIsOk(25, 70, 0.9, LANGUAGE_GERMAN));
    
    

    return 0;
}
