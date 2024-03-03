/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Ozer_Coursera 
 * @brief For statistical analytics methods definition and use
 *
 * This file includes some statistical analytics methods(e.g mean, median).
 *
 * @author Samet Özer
 * @date 03/03/2024
 *
 */

#include <stdio.h>
#include "stats.h"

#define SIZE (40)

int mean, max, min, median;

void main() {

unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	
	sort_array(test,SIZE);
	median = find_median(test,SIZE);
	mean = find_mean(test,SIZE);
	max = maximum(test,SIZE);
	min = minimum(test,SIZE);
	print_statistics();
	

}

void print_statistics() {

	printf("max=%d \n", max);	
	printf("min=%d \n", min);	
	printf("mean=%d \n", mean);	
	printf("median=%d \n", median);	
}

void print_array(unsigned char* dataset, unsigned int size) {

	for(int index = 0; index < size; index++) 
		printf("%d \n",dataset[index]);	
}

unsigned int find_median(unsigned char* dataset, unsigned int size) {

	return (dataset[size / 2] + dataset[(size / 2) - 1]) / 2;
}

unsigned int find_mean(unsigned char* dataset, unsigned int size) {
	
	int total = 0;
	
	for(int index = 0; index < size; index++) 
	{
		total += dataset[index];
	}
	
	return total / size;
}

unsigned int maximum(unsigned char* dataset, unsigned int size) {
	
	int max = 0;
	
	for(int index = 0; index < size; index++) 
	{
		if(dataset[index] > max)
			max = dataset[index];
	}

	return max;
}

unsigned int minimum(unsigned char* dataset, unsigned int size) {

	int min = 0;
	
	for(int index = 0; index < size; index++) 
	{
		if(dataset[index] < min)
			min = dataset[index];
	}

	return min;
}

void sort_array(unsigned char* dataset, unsigned int size) 
{
	int index, y, val;
	
	for (index = 0; index < size; ++index) 
    {
        for (y = index + 1; y < size; ++y) 
        {
            if (dataset[index] < dataset[y]) 
            {
                val = dataset[index];
                dataset[index] = dataset[y];
                dataset[y] = val;
            }
        }
    }
}

