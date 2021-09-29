/**
 * @file main.cpp
 * @author Prox_y
 * @brief Showing comparison and search algorythms with object oriented programming, including:
 * 		  -Max search
 * 		  -Comparison between elements
 * 		  -Comparison and verification of N elements greater than a single element.
 * @version 0.1
 * @date 2021-09-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <stdbool.h>
#define SIZE 5

using namespace std;

class functions {
	public: 

	void member(short int passarr[]) {
		for (size_t i = 0; i < SIZE; i++) {
			cout << "Inserisci il" << i+1 << "numero" << endl;
			cin >> passarr[i];
		}
	}

	bool verify(short int passarr2[]) {
		bool flag = false;
		int k = 5;
		for (size_t i = 0; i < SIZE; i++) {
			if (passarr2[i] == k) {
				flag = true;
				cout << "Numero corrispondente trovato per il numero" << i+1 << endl << "Numero:" << passarr2[i]
					 << endl;
			} else {
				cout << "Nessuna corrispondenza trovata per il numero" << i+1 << endl;
			}
			
				
		}
			return flag;
	}

	void greater_than(short int arr[]) {

		cout << "Confronto elementi di array su numero 5." << endl;
		short int k = 5;
		short int greater = 0;
		for (size_t i = 0; i < SIZE; i++) {
			cin >> arr[i];

			if (arr[i] > k){
				greater++;
			}
		}
		cout << "Numero di elementi piu' grande di k:" << greater << endl;
	}

	void largest(short int arr[]) {

		short int max = SHRT_MIN;
		for (size_t i = 0; i < SIZE; i++){
			cin >> arr[i];
			if (arr[i] > max) {
			   max = arr[i];
			}	
		}
		cout << "Numero maggiore nell'array:" << max << endl;
	}

};


int main() {

	short int mainarr[SIZE];

	functions utilizer;
	utilizer.member(mainarr);
	utilizer.verify(mainarr);
	utilizer.greater_than(mainarr);
	utilizer.largest(mainarr);
	system("pause");
	return 0;
}
