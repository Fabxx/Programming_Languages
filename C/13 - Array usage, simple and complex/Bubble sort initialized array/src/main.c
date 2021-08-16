/**
 * @file main.c
 * @author x86_Avx
 * @brief Bubble sorting with a array or integers, works if you initialize the array too.
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void selectionsort(int array[]);
void print(int array[]);
void randomizer(int array[]);

int main() {

	int array[N];

	randomizer(array);
	selectionsort(array);
	print(array);
}

void randomizer(int array[]) {

	int seed = time(NULL);
	srand(seed);

	int i;
	for (i = 0; i < N; i++) {
		printf("Randomizing the %d number\n", i+1);
		array[i] = rand() % (100 + 18 - 1) + 18; //randomizing between 18 and 100.
		printf("%d\n", array[i]);	
	}		
}

void selectionsort(int array[]) {
	int tmp, i;	
	int sorted = 0;

	/**We repeat this sequence of code until sorted gets back to 1 and
	 	the array is finished.**/

	do{
		sorted = 1;
		for (i = 0; i < N-1; i++){ 
			if (array[i] > array[i+1]) {
			tmp = array[i];
			array[i] = array[i+1];
			array[i+1] = tmp;
			sorted = 0;
		}	
	}
	}while(sorted == 0);
}

void print(int array[]) {

	int i;

	for (i = 0; i < N; i++) {
		printf("%d\t", array[i]);
	}

	
}