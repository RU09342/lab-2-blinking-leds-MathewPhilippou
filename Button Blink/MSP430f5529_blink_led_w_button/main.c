#include <msp430.h> 

void main (void)
{
volatile unsigned int i;        // volatile to prevent optimization
WDTCTL = WDTPW | WDTHOLD;
//PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                        // to activate previously configured port settings
//P1SEL =0;
P1DIR|=BIT0;
P1DIR&=~BIT1;
P1REN|=BIT1;
P1OUT|=BIT1;
P1OUT &=~(BIT0);
while (1){
    if((P1IN&BIT1)!=2){
           P1OUT ^= BIT0;
           for(i=100000000000; i>0; i--);     // delay
        }
    }
}
