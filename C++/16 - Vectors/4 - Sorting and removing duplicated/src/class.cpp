#include <libs.h>

vett vectors::vector1;
size_t vectors::size;
int vectors::compare;

void vectors::input() {

		int a = 0; 
	for (size_t i = 0; i < vector1.size()+1; i++){
		cin >> a;
		if (a == 33) //If number is 33 exit.
		{
				i = vector1.size();
		} else {
				vector1.push_back(a);
		}		//else put the number in the vector.
	}

}


void vectors::ordinamento() {
	
for (size_t i = 0; i < vector1.size(); i++){
	for (size_t j = i+1; j < vector1.size(); j++){
		if (vector1[i] > vector1[j]){
			//included in algorithm library
				swap(vector1[i], vector1[j]);
			}
		}
	}
							
} 
 	
void vectors::rimozione_duplicati() {

		for (size_t i = 0; i < vector1.size()-1; i++){
		if (vector1[i] == vector1[i+1]){
			vector1.erase(vector1.begin()+i);
		}
	}

}

	void vectors::output() {

	for (size_t i = 0; i < vector1.size(); i++){
		cout << " " << vector1[i];
	}

}
