/**
 * @file main.cpp
 * @author Prox_y
 * @brief Showing other list functions.
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <list>
using namespace std;

int main() {
	/*This index is the iterator that we will increase to point to a specific value of the list,
	  then using the index position, we're gonna insert a new value in the given position with the 
	  insert() function. It can  be initialized at the beginning of the list too 
	  and it's integrated in the list class.*/
	list<int> list1 = {1, 7, 20, 14};
	list<int>::iterator index;

	//iterating with the index, using list limits. Can't use size_t i because it won't be converted into a std list iterator.
	for (index = list1.begin(); index != list1.end(); index++){
		if (*index == 20) { //looking for the value we want to insert another value before it. We have to check it directly with the iterator pointer.
				list1.insert(index, 40);
			}			
	}

	for (index = list1.begin(); index != list1.end(); index++) {
			//note, only the poiting value in the list can be printed through the index, not the index itself.
			cout << "Printing index pointing  value: " << *index << endl;	
	}
	/*removing item with given position. we have to assign the function to the iterator, and increase 
	it only if we don't have a correspondency or else it goes out of range, we delete the element 
	but then it points ahead out of the list. The iterator itself must access with the function in this case.*/
	for (index = list1.begin(); index != list1.end();) {
		if (*index == 20 ) {
			index = list1.erase(index);
		} else {
			index++;
		}
	}
	
	for (index = list1.begin(); index != list1.end(); index++){
		cout << "Printing out new list with removed element. " << *index << endl;
	}

	system("pause");
	return 0;
}
