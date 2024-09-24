#include <xc.h>
#include "config_bits.h"
#include "led.h"
#include "swt.h"

void checkSWT_setLED() {
    setLEDValue(0, readSWT(0));
    setLEDValue(1, readSWT(1));
    setLEDValue(2, readSWT(2));
    setLEDValue(3, readSWT(3));
    setLEDValue(4, readSWT(4));
    setLEDValue(5, readSWT(5));
    setLEDValue(6, readSWT(6));
    setLEDValue(7, readSWT(7));
}

int main() {
    initLED();
    initSWT();
    while (1) {
        checkSWT_setLED();
    }
    
}