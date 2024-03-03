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
 * @brief For statistical analytics methods declaration
 *
 * This file includes declaration of statistical analytics methods
 *
 * @author Samet Özer
 * @date 03/01/2024
 *
 */
 
 
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief  A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function returns the results of all statistical analysis methods we used.
 *
 */
void print_statistics();

/**
 * @brief Prints the array to the screen
 *
 * Print the dataset to the screen in nicely formatted
 *
 * @param dataset Dataset to be printed
 * @param size The size of the dataset 
 */
void print_array(unsigned char* dataset, unsigned int size);

/**
 * @brief Finding median of dataset
 *
 * This function finds the median of the data set
 *
 * @param dataset The dataset we are working on
 * @param size The size of the dataset 
 * @return Median value of dataset
 */
unsigned int find_median(unsigned char* dataset, unsigned int size);

/**
 * @brief Finding mean of dataset
 *
 * This function finds the mean of the data set
 *
 * @param dataset The dataset we are working on
 * @param size The size of the dataset 
 * @return Mean value of dataset
 */
unsigned int find_mean(unsigned char* dataset, unsigned int size);

/**
 * @brief Finding largest number in the dataset
 *
 * This function finds the largest number in the data set
 *
 * @param dataset The dataset we are working on
 * @param size The size of the dataset 
 * @return Largest number in the dataset
 */
unsigned int maximum(unsigned char* dataset, unsigned int size);

/**
 * @brief Finding smallest number in the dataset
 *
 * This function finds the smallest number in the data set
 *
 * @param dataset The dataset we are working on
 * @param size The size of the dataset 
 * @return Smallest number in the dataset
 */
unsigned int minimum(unsigned char* dataset, unsigned int size);

/**
 * @brief Sorting dataset largest to smallest order
 *
 * This function sort the data set largest to smallest
 *
 * @param dataset The dataset we are working on
 * @param size The size of the dataset 
 */
void sort_array(unsigned char* dataset, unsigned int size);

#endif /* __STATS_H__ */

