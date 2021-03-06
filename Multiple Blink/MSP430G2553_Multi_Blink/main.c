#include <msp430.h>


/**
 * Multi_Blink.c
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1DIR |= BIT0;                  // configure P1.0 as output
    P1DIR |= BIT6;                  // configure P1.6 as output

    volatile unsigned int i;        // volatile to prevent optimization

    while(1)
           {

               P1OUT ^= BIT0;              // toggle P1.0
               for(i=10000; i>0; i--);     // delay
               P1OUT ^= BIT6;              // toggle P4.7
               P1OUT ^= BIT0;
               for(i=10000; i>0; i--);
           }
}

