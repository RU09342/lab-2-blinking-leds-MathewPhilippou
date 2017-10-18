# Off Board Blink
##Objective
To toggle two LEDs on a breadboard utilizing only the microprocessor on the G2553
###HOW
In order to succesfuly use the microprocessor from the G2553 off the development board we must first program the chip with the right code.
I ran the Multi Blink code as we are tasked with blinking two LEDs on a breadboard. After moving the microprocessor from the G2553 to the
breadboard, I connected power and ground to the chip. Pins RST (S1) and P1.3 (S2) were connected to power through a 1k resistor. Finally, 
LEDs were connected to pins P1.0 (LED1) and P1.6 (LED2) through a 1k resistor. The result was the two LEDs blinking independently.