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
 * @file stats.h
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author MDominguez
 * @date 24.12.2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief prints several information related to an unsigned char values array
 *
 * <Add Extended Description Here>
 *
 * @param <Input:  unsigned char * array> < pointer to array data>
 * @param <Input:  unsigned char len>     < number of uchar contained in array>

 * @return <void>
 */
void print_statistics(unsigned char * array, unsigned char len);


/**
 * @brief <Finds median of an unsigned char values array>
 *
 * <Add Extended Description Here>
 *
 * @param <Input:  unsigned char * array> < pointer to array data>
 * @param <Input:  unsigned char len>     < number of uchar contained in array>
 * @param <Output: unsigned char *ave>    < pointer to hold median value>
 *
 * @return <unsigned char>
 */
unsigned char find_median(unsigned char * array, unsigned char len, unsigned char *ave);


/**
 * @brief <Finds mean of an unsigned char values array>
 *
 * <Add Extended Description Here>
 *
 * @param <Input:  unsigned char * array> < pointer to array data>
 * @param <Input:  unsigned char len>     < number of uchar contained in array>
 * @param <Output: unsigned char *ave>    < pointer to hold mean value>
 *
 * @return <unsigned char>
 */
unsigned char find_mean(unsigned char * array, unsigned char len, unsigned char *mean);


/**
 * @brief <Finds maximum of an unsigned char values array>
 *
 * <Add Extended Description Here>
 *
 * @param <Input:  unsigned char * array> < pointer to array data>
 * @param <Input:  unsigned char len>     < number of uchar contained in array>
 * @param <Output: unsigned char *ave>    < pointer to hold max value>
 *
 * @return <unsigned char>
 */
unsigned char find_maximum(unsigned char * array, unsigned char len, unsigned char *max);


/**
 * @brief <Finds minimum of an unsigned char values array>
 *
 * <Add Extended Description Here>
 *
 * @param <Input:  unsigned char * array> < pointer to array data>
 * @param <Input:  unsigned char len>     < number of uchar contained in array>
 * @param <Output: unsigned char *ave>    < pointer to hold min value>
 *
 * @return <unsigned char> 
 */
unsigned char find_minimum(unsigned char * array, unsigned char len, unsigned char *min);


/**
 * @brief <sort given unsigned char array>
 *
 * <Add Extended Description Here>
 *
 * @param <Input/Output: unsigned char * array> <input array to be sorted>
 * @param <Input:  unsigned char len>           < number of uchar contained in array>
 * @param <Input:  unsigned char order>         < 0: descending; 1 ascending>
 *
 * @return <unsigned char>
 */
unsigned char sort_array(unsigned char * array, unsigned char len,unsigned char order);
#endif /* __STATS_H__ */
