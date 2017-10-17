#include <msp430.h> 

void main (void)
{
volatile unsigned int i;        // volatile to prevent optimization
WDTCTL = WDTPW | WDTHOLD;
PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                        // to activate previously configured port settings
P1DIR|=BIT0;
P1OUT &=~(BIT0);

P5DIR&=~BIT5;
P5REN|=BIT5;
P5OUT|=BIT5;


while (1){
    if((P5IN&BIT5)!=BIT5){
           P1OUT ^= BIT0;
           for(i=100000000000; i>0; i--);     // delay
    }
    else{
            P1OUT &=~(BIT0);
    }
}
}
