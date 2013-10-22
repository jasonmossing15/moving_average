#include <msp430.h> 
#include "moving_average.h"

#define N_AVG_SAMPLES 4
#define SIZE 10                 //Number values in the data stream

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    int Maximum;
    int Minimum;
    int range;
    int numbers[] = {45, 42, 41, 40, 43, 45, 46, 47, 49, 45};
    int tempArray[N_AVG_SAMPLES];

    //sets limits of max and min so they can be changed
    Maximum = -256;
    Minimum = 255;

    int	i, x = 0;
    int average;

    //SIZE + 2 because 1 is for
    //Just use this to test easier and quicker, not actually needed in lab
    int averages[SIZE+2];

    // initializes the temp array so the average is 0
    //i for some reason kept resetting to 0 so I added the x variable to keep track of i
    for(i = 0; i <= N_AVG_SAMPLES; i++){
    	x = i;
    	tempArray[i] = 0;
    	i = x;
    }

    //calculates the size of the array
    //int sizeOfNumbersArray = sizeof(numbers)/sizeof(int);
   // sizeOfNumbersArray = SIZE;

    /*
     * computes the average for each number set
     */
    for(i = 0; i <= SIZE + 1; i++){
    	average = getAverage(tempArray, N_AVG_SAMPLES);
    	averages[i] = average;
	   addSample(numbers[i],tempArray, N_AVG_SAMPLES);
    }

    /*
     * calculates max, min, and range of the number set
     */
    Maximum = maximum(numbers, Maximum, SIZE);
    Minimum = minimum(numbers, Minimum, SIZE);
    range = rangeCalc(Maximum, Minimum);

    //Traps CPU
    while(1){}

	return 0;
}
