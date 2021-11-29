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

#include <iostream>
using namespace std;
#include <time.h>


void swap(int *x, int *y);
void Bubblesort(int array[]);
void print(int array[]);
void randomizer(int array[]);

int main() {

	int array[5];

	randomizer(array);
	Bubblesort(array);
	print(array);
}

void randomizer(int array[]) {

	int seed = time(NULL);
	srand(seed);

	int i;
	for (i = 0; i < 5; i++) {
		cout << "Randomizing the " << i+1 << " number" << endl;
		array[i] = rand() % (100 + 18 - 1) + 18; //randomizing between 18 and 100.
		cout << i+1 << " Element: " << array[i] << endl;	
	}		
}

//Manual swap function.
void swap(int *x, int *y) {
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

void Bubblesort(int array[]) {
	int tmp, i, j;	
	/*We repeat this sequence of code untilthe array is finished.*/
	
		for (i = 0; i < 5; i++){ 
		  for (j = i+1; j < 5; j++) {
			if (array[i] > array[j]) {
			swap(&array[i], &array[j]); //in C++ you can just write like this, no need of the above funciton.
			}	
		}
	}
}

void print(int array[]) {

	int i;
	for (i = 0; i < 5; i++) {
		cout << " " << array[i];
	}

	
}
