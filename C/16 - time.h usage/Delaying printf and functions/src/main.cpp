/**
 * @file main.cpp
 * @author Prox_y
 * @brief A simple program that shows how to generate a delay to print
 * 		  stuff or delay functions. Works for both C/C++
 * @version 0.1
 * @date 2021-09-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <time.h>
#define N 5

using namespace std;

void delay(int number_of_seconds) {
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
  
// Driver code to test above function

int main() {

	for (size_t i = 0; i < N; i++) {
		delay(1); //integer number that will be multiplied to achieve seconds.
		cout << ".";
	}
			cout << "exiting program...\n" << endl;
			system("pause");
			return 0;
		
}