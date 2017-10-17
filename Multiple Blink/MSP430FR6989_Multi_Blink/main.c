#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= 0x01;                          // Set P1.0 to output direction
    P9DIR |= BIT7;                          // Set ____ to output direction

    while(1)
           {
               volatile unsigned int i;            // volatile to prevent optimization

               P1OUT ^= 0x01;              // toggle P1.0
               for(i=10000; i>0; i--);     // delay
               P9OUT ^= BIT7;              // toggle P4.7
               P1OUT ^= 0x01;
               for(i=10000; i>0; i--);
           }
   }

