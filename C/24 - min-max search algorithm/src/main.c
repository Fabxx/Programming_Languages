/**
 * @file main.c
 * @author Prox_y, SSUPI
 * @brief This program shows how to search a minimum value and max value
 * 		  in a array of integers.
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
	//min gets the maximum value as possible, so the if condition will be always true
	//and the assignation will happen, if a[i] is always > than min, the assignation
	//will never happen, same for the max below.

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
