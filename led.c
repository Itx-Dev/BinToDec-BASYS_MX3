#include <xc.h>
#include "led.h"

int initLED() {
    LED0 = 0;
    LED1 = 0;
    LED2 = 0;
    LED3 = 0;
    LED4 = 0;
    LED5 = 0;
    LED6 = 0;
    LED7 = 0;
}

unsigned int setLEDValue(unsigned int LED, unsigned int value) {
    switch (LED){
        case 0:
            pLED0 = value;
            break;
        case 1:
            pLED1 = value;
            break;
        case 2:
            pLED2 = value;
            break;
        case 3:
            pLED3 = value;
            break;
        case 4:
            pLED4 = value;
            break;
        case 5:
            pLED5 = value;
            break;
        case 6:
            pLED6 = value;
            break;
        case 7:
            pLED7 = value;
            break;
        }   
}
