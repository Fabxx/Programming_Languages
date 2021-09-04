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
#define N 5

using namespace std;

void delay(int ns)
{

    int ms = 1000 * ns:
    clock_t start_time = clock();
 
    while (clock() < start_time + ms);
}
  
// Driver code to test above function

int main() {

	int n = 0, a = 0;

	while (n == 0) {
		do{
			int seed = time(NULL);
			srand(seed);

			n = rand() % (10 - 1 - 0) + 1; //max - 1 - min + min.
										   //range between 0-10.

			cout << "Guess the number between 1-10!" << endl;
			cin >> a; 
			
			cout << "You failed, try again!" << endl;
			cout << "Randomizing value in 5 seconds\n" << endl;
			
			for (size_t i = 0; i < N; i++) {
				delay(1); //integer number that will be multiplied to achieve seconds.
				cout << ".";
			}
				system("cls");

		} while (a != n);

			cout << "Success! exiting program...\n" << endl;
			system("pause");
			return 0;
		
	}

}
