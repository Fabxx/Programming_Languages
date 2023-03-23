/**
 * @file main.cpp
 * @author -_<
 * @brief Showing how to search and delete an element in dictionary.
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> hash_table;
	map<int, int>::iterator index;

	for (size_t i = 0; i < 5; i++){
		hash_table.insert(pair<int, int>(i+1, i));
	}
	
	for (index = hash_table.begin(); index != hash_table.end(); index++){
		cout << " " << index->first //first int pointer
		     << " " << index->second << endl; //second int pointer.
	}
	
	//direct deletition
	//hash_table.erase(2)

	for (index = hash_table.begin(); index != hash_table.end();){
		if (index->first == 2){
			cout << "Key 2 found, removing..." << endl;
			index = hash_table.erase(index); //map::erase() returns the next iterator, so assign that to your index variable.
		} else {
			index++;
		}
	}
		cout << "New table" << endl;
	for (index = hash_table.begin(); index != hash_table.end(); index++){
			cout << " " << index->first
				 << " " << index->second << endl;
		}
			return 0;
}
	
