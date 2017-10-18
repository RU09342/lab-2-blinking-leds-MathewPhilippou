#Simple Blink
##Objective
To utilize polling in order to toggle the output of an led onboard at a desired rate.
## How
In order to code an LED to blink on and off, only a few lines of code are required. Initially we must initialize the 
LED as an output in order to be toggled. Then, we create a while loop that will always run by using "while(1)". 
Finally, we blink the LED and create a delay between the second blink with a for loop that will start at a large 
value and quickly decrease at the rate of the onboard clock. Increasing this 'i' value will increase the duration
between each blink, and how long the LED is on for.