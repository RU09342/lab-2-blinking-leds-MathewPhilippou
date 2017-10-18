# Multi Blink
## Objective
To work off of the progress made in Part 1 of Lab 2 by toggling an LED with a an onboard button.
# How
We ofourse still need to initialize one of the LED's as an output but for this lab we also need an input that
will work with the same functionality as a  switch. For this we use an oboard button. In order to initialize it as an 
input we must use three lines of code:
### P5DIR&=~BIT5;
### P5REN|=BIT5;
### P5OUT|=BIT5;
(The numbers after P and BIT will change depending)

This declares the button as an input that may be toggled. Similar to the previous parts of Lab 2, we must make a 
never ending while loop. In order to toggle the LED with the button we must create an if else statement. We declare
that if the input bit, P5, anded with the button bit, BIT5, are not equal to BIT5 then we toggle the LED and use a delay
to allow it to blink. Inside the else statement we just declare to keep the LED bit always turned off. 

For extra credit a button blink was coded on the F5529 that used two LEDs and 2 Buttons. If one button is pressed, the 
LEDs blink at different rates, if the other is  pressed both LEDs blink together at the same rate.