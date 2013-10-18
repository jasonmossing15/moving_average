/*
 * L22Implementation.c
 *
 *  Created on: Oct 15, 2013
 *      Author: C15Jason.Mossing
 */

#include "L22Header.h"

/*
 * inputs: array of samples and how many samples there are
 * computes the sum of all values then divided by the number of samples to result in the average
 */
int getAverage(int array[], int numberOfSamples){
	int sum = 0;
	int x;
	for(x = 0; x < numberOfSamples; x++){
			sum += array[x];
		}
	int average = sum / numberOfSamples;

	return average;
}

/*
 * inputs: new sample, array of samples, number of total samples
 * returns: new array of samples
 * shifts the values in the array to the left, then adds in the new sample.
 */
void addSample(int sample, int array[], int numberOfSamples){
	int y;
	for(y=0; y < numberOfSamples-1; y++){
		array[y] = array[y+1];
	}
	array[numberOfSamples-1] = sample;
}

/*
 * checks all numbers in the array to see if the value is the max value
 */
int maximum(int* allNumbers, int maximum, int size){
	int i;
	for(i = 0; i < size; i++){
	if(*allNumbers > maximum){
		maximum = *allNumbers;
	}
	allNumbers++;
	}
	return maximum;
}

/*
 * checks all numbers in the array to see if the value is the min value
 */
int minimum(int* allNumbers, int minimum, int size){
	int i;
	for(i = 0; i < size; i++){
	if(*allNumbers < minimum){
		minimum = *allNumbers;
	}
	allNumbers++;
	}
	return minimum;
}
/*
 * returns the range
 */
int rangeCalc(int max, int min){
	return max - min;
}


