/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#ifndef _SWT_H    /* Guard against multiple inclusion */
#define _SWT_H

#include <xc.h>

#define SWT0 TRISFbits.TRISF3
#define pSWT0 PORTFbits.RF3

#define SWT1 TRISFbits.TRISF5
#define pSWT1 PORTFbits.RF5

#define SWT2 TRISFbits.TRISF4
#define pSWT2 PORTFbits.RF4

#define SWT3 TRISDbits.TRISD15
#define pSWT3 PORTDbits.RD15

#define SWT4 TRISDbits.TRISD14
#define pSWT4 PORTDbits.RD14

#define SWT5 TRISBbits.TRISB11
#define pSWT5 PORTBbits.RB11
#define aSWT5 ANSELBbits.ANSB11

#define SWT6 TRISBbits.TRISB10
#define pSWT6 PORTBbits.RB10
#define aSWT6 ANSELBbits.ANSB10

#define SWT7 TRISBbits.TRISB9
#define pSWT7 PORTBbits.RB9
#define aSWT7 ANSELBbits.ANSB9

void initSWT();
int readSWT(int SWT);


#endif /* _SWT_H */

/* *****************************************************************************
 End of File
 */
