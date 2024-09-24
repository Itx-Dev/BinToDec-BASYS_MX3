#ifndef _LED_H    /* Guard against multiple inclusion */
#define _LED_H

#define LED0 TRISAbits.TRISA0
#define pLED0 PORTAbits.RA0

#define LED1 TRISAbits.TRISA1
#define pLED1 PORTAbits.RA1

#define LED2 TRISAbits.TRISA2
#define pLED2 PORTAbits.RA2

#define LED3 TRISAbits.TRISA3
#define pLED3 PORTAbits.RA3

#define LED4 TRISAbits.TRISA4
#define pLED4 PORTAbits.RA4

#define LED5 TRISAbits.TRISA5
#define pLED5 PORTAbits.RA5

#define LED6 TRISAbits.TRISA6
#define pLED6 PORTAbits.RA6

#define LED7 TRISAbits.TRISA7
#define pLED7 PORTAbits.RA7

int initLED();
unsigned int setLEDValue(unsigned int led, unsigned int value);


#endif /* _LED_H */

/* *****************************************************************************
 End of File
 */
