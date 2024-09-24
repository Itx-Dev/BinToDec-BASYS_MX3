#include "swt.h"

void initSWT() {
    SWT0 = 1;
    SWT1 = 1;
    SWT2 = 1;
    SWT3 = 1;
    SWT4 = 1;
    SWT5 = 1;
    SWT6 = 1;
    SWT7 = 1;
    
    // Turn off analog
    aSWT5 = 0;
    aSWT6 = 0;
    aSWT7 = 0;
    
}

int readSWT(int SWT) {
    if (SWT == 0) {
        return pSWT0;
    }
    if (SWT == 1) {
        return pSWT1;
    }
    if (SWT == 2) {
        return pSWT2;
    }
    if (SWT == 3) {
        return pSWT3;
    }
    if (SWT == 4) {
        return pSWT4;
    }
    if (SWT == 5) {
        return pSWT5;
    }
    if (SWT == 6) {
        return pSWT6;
    }
    if (SWT == 7) {
        return pSWT7;
    }    
}