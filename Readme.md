This library includes three files: main, header, and implementation.

The combination of these files creates a program that calculates a moving average depending on the stream of numbers and the amount of samples that are compared to create the average.

There are two main functions used to create the moving average. The first is adding a sample to populate an array with the correct number of samples. This function moves shifts the values left one location then moves the new sample into the last spot of the array. 

The other main function is creating the average. This function sums up all of the values in the sample array then divdes it by the number of sample, this results in the moving average.

The other functions are self-explanatory: maximum, minimum, and range calculator.
