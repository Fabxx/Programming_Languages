/**
 * @file main.c
 * @author Prox_y, SSUPI
 * @brief This program shows how to search a minimum value and max value
 * 		  in a array of integers. For more reference:
 			
		CHAR_BIT     8     Defines the number of bits in a byte.
		SCHAR_MIN     -128     Defines the minimum value for a signed char.
		SCHAR_MAX     +127     Defines the maximum value for a signed char.
		UCHAR_MAX     255     Defines the maximum value for an unsigned char.
		CHAR_MIN     -128     Defines the minimum value for type char and its value will be equal to SCHAR_MIN if char represents negative values, otherwise zero.
		CHAR_MAX     +127     Defines the value for type char and its value will be equal to SCHAR_MAX if char represents negative values, otherwise UCHAR_MAX.
		MB_LEN_MAX     16     Defines the maximum number of bytes in a multi-byte character.
		SHRT_MIN     -32768     Defines the minimum value for a short int.
		SHRT_MAX     +32767     Defines the maximum value for a short int.
		USHRT_MAX     65535     Defines the maximum value for an unsigned short int.
		INT_MIN     -2147483648     Defines the minimum value for an int.
		INT_MAX     +2147483647     Defines the maximum value for an int.
		UINT_MAX     4294967295     Defines the maximum value for an unsigned int.
		LONG_MIN     -9223372036854775808     Defines the minimum value for a long int.
		LONG_MAX     +9223372036854775807     Defines the maximum value for a long int.
		ULONG_MAX     18446744073709551615     Defines the maximum value for an unsigned long int.
 * @version 0.1
 * @date 2021-08-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define ARR 5

void search_min(int a[]);
void search_max(int a[]);
void input(int a[]);

int main(void) {
	int array[ARR];
	input(array);
	search_min(array);
	search_max(array);
	
}

void input(int a[]) {

	int i;

	for (i = 0; i < ARR; i++) {
		printf("Insert the %d number\n", i+1);
		scanf("%d", &a[i]);
	}
}

void search_min(int a[]) {

	int i, min = INT_MAX;
	/*min gets the maximum value as possible, so the first if condition 
	will be always true to force set the value from the array, to then compare
	because if a[i] is always > than min, the assignation will never happen, same for the max below.*/

	for (i = 0; i < ARR; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
		printf("min value:%d\n", min);
}


void search_max(int a[]) {

	int i, max = INT_MIN;
	//minimum value to check both positive/negative values.

	for (i = 0; i < ARR; i++) {
		if (a[i] > max) {
			max = a[i];
		}	
	}
		printf("max value:%d\n", max);
}
