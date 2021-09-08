/**
 * @file main.cpp
 * @author Prox_y
 * @brief A simpe game where you have to guess the number, but be careful,
 * 		  if you're wrong, the number to guess will be randomized!
 * @version 0.1
 * @date 2021-09-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <time.h>
#define N 3

using namespace std;

void delay(int number_of_seconds);
void randomizer();
void printer();
  
// Driver code to test above function

int main(void) {

	randomizer();
}


void randomizer() {

	int n = 0, a = 0;

	while (n == 0) { //check if n is still 0, then repeat the sequence.
		do{
			int seed = time(NULL);
			srand(seed);

			n = rand() % (10 - 1 - 0) + 0; //max - 1 - min + min.
										   //range between 0-10.

			cout << "\033[0;37mGuess the number between 1-10!" << endl;
			cin >> a; 

			if (a != n) {
				cout << "\033[0;31mYou failed, try again!" << endl;
				cout << "\033[0;33mRandomizing value in 3 seconds\n" << endl;
			
			for (size_t i = 0; i < N; i++) {
				delay(1); //integer number that will be multiplied to achieve seconds.
				cout << ".";
			}
				system("cls");
				printer();
				delay(3);
				system("cls");
		}

	} while (a != n);

			cout << "\033[0;32mSuccess! exiting program...\n" << endl;
			system("pause");
	}
  
}


void delay(int number_of_seconds) {
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
	
}

void printer() {

	for (size_t i = 0; i < 50; i++) {
		cout << "\033[0;31m1011101010101010010101010101010101010101010101010";
		system("cls");
	}
}
