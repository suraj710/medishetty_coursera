//headers

#ifndef STATS_H_
#define STATS_H_

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 * 
 * @param arr   Pointer to an array of data
 * @param length    Length of the array
 */
void print_statistics(unsigned char* arr, unsigned int length);

/**
 * @brief Prints the elements of an array.
 * 
 * @param arr   Pointer to an array of data
 * @param length    Length of the array
 */
void print_array(unsigned char* arr, unsigned int length);

/**
 * @brief Calculates the median value of an array.
 * 
 * @param arr   Pointer to an array of data
 * @param length    Length of the array
 * @return The median value
 */
unsigned char find_median(unsigned char* arr, unsigned int length);

/**
 * @brief Calculates the mean value of an array.
 * 
 * @param arr   Pointer to an array of data
 * @param length    Length of the array
 * @return The mean value
 */
unsigned char find_mean(unsigned char* arr, unsigned int length);

/**
 * @brief Finds the maximum value in an array.
 * 
 * @param arr   Pointer to an array of data
 * @param length    Length of the array
 * @return The maximum value
 */
unsigned char find_maximum(unsigned char* arr, unsigned int length);

/**
 * @brief Finds the minimum value in an array.
 * 
 * @param arr   Pointer to an array of data
 * @param length    Length of the array
 * @return The minimum value
 */
unsigned char find_minimum(unsigned char* arr, unsigned int length);

/**
 * @brief Sorts an array in descending order.
 * 
 * @param arr   Pointer to an array of data
 * @param length    Length of the array
 */
void sort_array(unsigned char* arr, unsigned int length);

#endif /* STATS_H_ */

