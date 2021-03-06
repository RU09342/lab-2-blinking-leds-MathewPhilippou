#include <msp430.h> 

void main (void)
{
volatile unsigned int i;        // volatile to prevent optimization
WDTCTL = WDTPW | WDTHOLD;
//PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                      // to activate previously configured port settings
//P1SEL =0;

P1DIR|=BIT0;
P4DIR|=BIT7;

P1DIR&=~BIT1;
P1REN|=BIT1;
P1OUT|=BIT1;

P2DIR&=~BIT1;
P2REN|=BIT1;
P2OUT|=BIT1;

P1OUT &=~(BIT0);
P4OUT &=~(BIT7);

while (1){
    int j=0;
    if ((P1IN&BIT1)!=2) {
        //for(i = 10000; i>0; i--);
        j = !j;
    }

     if (j == 0){
         P1OUT ^= BIT0;
         P4OUT &=~(BIT7);
         for(i = 1000000; i>0; i--);
     }

     else if (j == 1){
         P4OUT ^= BIT7;
         P1OUT &=~(BIT0);
         for(i = 1000000; i>0; i--);
     }
    if((P2IN&BIT1) != 2){
         P1OUT ^= BIT0;
         P4OUT ^= BIT7;
         for(i = 1000000; i>0; i--);
     }


     }


}


