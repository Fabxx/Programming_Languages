/**
 * @file main.cpp
 * @author -_<
 * @brief Showing a basic dictionary creation in C++, useful
 *        to create a personal has table too. In this examples i used the mersenne twister algorithm
 *        to generate the hashes.
 *        Some basic functions associated with Map:
		  begin() – Returns an iterator to the first element in the map
		  end() – Returns an iterator to the theoretical element that follows last element in the map
		  size() – Returns the number of elements in the map
		  max_size() – Returns the maximum number of elements that the map can hold
		  empty() – Returns whether the map is empty
	      insert(pair<typename, typename>(number, number2) – Adds a new element to the map
	      erase(iterator position) – Removes the element at the position pointed by the iterator
		  erase(const g)– Removes the key value ‘g’ from the map
		  clear() – Removes all the elements from the map
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>
using namespace std;

int main() {
	//first int is KEY, second int is VALUE associated to key.
	map<int, int> hash_table;
	//Iterator to scan is required, like lists.
	map<int, int>::iterator index;
	for (int16_t i = 0; i < 10; i++){
		   hash_table.insert(pair<int, int>(i+1, i));
	}
	
	for (index = hash_table.begin(); index != hash_table.end(); index++) {
		cout << "\tKEY: " << index->first 
		     << "\tHASH: " << index->second << endl;	
		}
	  return 0;
}
