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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int sorted[SIZE], maximum, minimum;
  float mean, median;
  
  /* Statistics and Printing Functions Go Here */
  
  print_array(test, SIZE);
  print_array(test, SIZE);
  mean    = find_mean    (test, SIZE);
  median  = find_median  (test, SIZE);
  maximum = find_maximum (test, SIZE);
  minimum = find_minimum (test, SIZE);
  print_statistics();

}

/* Add other Implementation File Code Here */

print_array (int array[], int length){};

float find_median (int array[], int length){};

float find_mean (int array[], int length){};

int find_maximum (int array[], int length){};

int find_minimum (int array[], int length){};

int sort_array ( int array[], int length){};

print_statistics(){};
