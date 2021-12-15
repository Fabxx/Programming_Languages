#include <iostream>
using namespace std;
#include <class.h>

vett vectors::vector1;

void vectors::input() {

		int a = 0; 
	//i < size+1 always true so we can stop him manually.
	for (size_t i = 0; i < vector1.size()+1; i++){
		//if a != 33 insert a inside the vector, or else exit from the cicle.
		if (a != 33) {
				cin >> a;
				vector1.push_back(a); 
		} else {
			i = vector1.size()+1;
		}		
	}
}

void vectors::sort() {
	
	int temp;

	for (size_t i = 0; i < vector1.size(); i++){
		for (size_t j = i+1; j < vector1.size(); j++) {
			if (vector1[i] > vector1[j]){
				temp = vector1[i];
				vector1[i] = vector1[j];
				vector1[j] = temp;		
			}
		}
	}
}
void vectors::remove_duplicated() {

	for (size_t i = 0; i < vector1.size(); i++){
		if (vector1[i] == vector1[i+1]) {
			vector1.erase(vector1.begin() + i);
		}
	}
}

void vectors::output() {
	for (size_t i = 0; i < vector1.size(); i++){
		cout << " " << vector1[i];
	}
}