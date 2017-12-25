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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */


void print_statistics(unsigned char * array, unsigned char len)
{
  unsigned char median  = 0;
  unsigned char mean    = 0;
  unsigned char minimum = 0;
  unsigned char maximum = 0;
  unsigned char result  = 1; //0 ok; >0 error

  printf("Printing stadistics of following array:\n");
  
  printf("-- Array = [");
  for (int i = 0; i< len; i++) 
  {
   printf(" %d",array[i]);
  }
  printf("]\n");
  printf("--- Number of unsigned char elements = %d\n",len); 

  result = sort_array(array,len,0);
  printf("--- Sorted array (descending) =\n");
  printf("---> [");
  for (int i = 0; i< len; i++) 
  {
   printf(" %d",array[i]);
  }
  printf("]\n");

  result = find_median(array, len,&median);
  result = find_mean(array, len,&mean);
  result = find_maximum(array, len,&maximum);
  result = find_minimum(array, len,&minimum);

  printf("--- Median = %d\n",median); 
  printf("--- Mean = %d\n",mean);
  printf("--- Maximum = %d\n",maximum); 
  printf("--- Minimum = %d\n",minimum);

}

unsigned char find_median(unsigned char * array, unsigned char len, unsigned char *ave)
{
  unsigned char return_val = 1;
  unsigned char * ptr = ave;
  unsigned char  tmp  = 0; 

  if ((0 != len) && (NULL != ptr))
  {
    //First sort array
    return_val = sort_array(array,len,1);
    //Check odd/even
    if (0 == (len%2))
    {
      //even
     tmp = len/2;
     *ptr = (array[tmp]+array[tmp+1])/2;
    }
    else
    {
      //odd; element len/2 +1 --> index len/2
      tmp = len/2;
      *ptr = array[tmp];
    }
  
   return_val = 0;
  }
  return return_val;
}


unsigned char find_mean(unsigned char * array, unsigned char len, unsigned char *mean)
{
  unsigned char return_val = 1;
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


unsigned char find_maximum(unsigned char * array, unsigned char len, unsigned char * max)
{
  unsigned char return_val     = 1; 
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

unsigned char find_minimum(unsigned char * array, unsigned char len, unsigned char *min)
{
  unsigned char return_val = 1;
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


unsigned char sort_array(unsigned char * array, unsigned char len, unsigned char order)
{
  unsigned char return_val = 1;
  unsigned char tmp = 0;


  if (0 != len)
  {
    //printf (" Unsorted array = ");
    //for (int i = 0; i< len; i++) printf ("%d ",array[i]);  
    //printf ("\n");

    for (int i = 0; i< len; i++)
    {
     for(int j=i+1; j<len; j++)
     {
       if (0 == order)
       {
        //descending
	if (array[i] < array[j])
        {
         tmp = array[i];
         array[i] = array[j];
         array[j] = tmp;
        }
       }
       else
       {
        //ascending
        if (array[i] > array[j])
        {
         tmp = array[i];
         array[i] = array[j];
         array[j] = tmp;
        }
       }
     }
   }
  //printf (" Sorted array = ");
  //for (int i = 0; i< len; i++) printf ("%d ",array[i]);  
  //printf ("\n");

  return_val = 0;
  }

  return return_val;
}



