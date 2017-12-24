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
 * @file stats.c 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author MDominguez
 * @date 24.12.2017
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

  char median  = 0;
  unsigned char mean    = 0;
  unsigned char minimum = 0;
  unsigned char maximum = 0;
  unsigned char test_ordered[SIZE];
  char result  = 1;

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  result = find_median(test,SIZE,&median);
  result = find_mean(test,SIZE, &mean);
  result = find_minimum(test,SIZE, &minimum);
  result = find_maximum(test,SIZE, &maximum);
  result = sort_array(test,test_ordered,SIZE);
  print_statistics(minimum,maximum,mean,median);

}

/* Add other Implementation File Code Here */

//print_statistics() - A function that prints the statistics of an array including minimum, ///////maximum, mean, and median.

void print_statistics(char min, unsigned char max, char mean, char med)
{
   printf("--Minimum = %d\n--Maximum = %d\n--Mean = %d\n--median = %d\n",min,max,mean,med);
}

//Given an array of data and a length, returns the median value
char find_median(char * array, char len, char *ave)
{
  char return_val = 1;
  char * ptr = ave;
  if ((0 != len) && (NULL != ptr))
  {
   *ptr = 3;
   return_val = 0;
  }
  return return_val;

}


// Given an array of data and a length, returns the mean
char find_mean(unsigned char * array, char len, unsigned char *mean)
{
  char return_val = 1;
  unsigned char * ptr = mean;
  unsigned int aux = 0;

  if ((0 != len) && (NULL != ptr))
  {
    *ptr = 0;
    for (int i = 0; i< len; i++)
    {
     aux += array[i];
    }
    *ptr = aux/len;
    return_val = 0;
  }
  return return_val;
}


//find_maximum() - Given an array of data and a length, returns the maximum
char find_maximum(unsigned char * array, char len, unsigned char * max)
{
  char return_val     = 1; 
  unsigned char * ptr = max;
  if ((0 != len) && (NULL != ptr))
  {
    *ptr = array[0];
    for (int i = 0; i< len; i++)
    {
       if (array[i]>*ptr)
       {
         *ptr = array[i];
       }
    }
    return_val = 0;
  }
  return return_val;
}

// Given an array of data and a length, returns the minimum
char find_minimum(unsigned char * array, char len, unsigned char *min)
{
  char return_val = 1;
  unsigned char * ptr = min;
  if ((0 != len) && (NULL != ptr))
  {
    *ptr = array[0];
    for (int i = 0; i< len; i++)
    {
       if (array[i]<*ptr)
       {
         *ptr = array[i];
       }
    }
    return_val = 0;
  }
  return return_val;
}

//Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
char sort_array(unsigned char * array, unsigned char * array_output, char len)
{
  char return_val = 1;
  return return_val;
}



