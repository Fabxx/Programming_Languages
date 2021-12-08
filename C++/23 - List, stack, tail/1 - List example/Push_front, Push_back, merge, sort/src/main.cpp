/**
 * @file main.cpp
 * @author Prox_y
 * @brief Showing a simple list usage.
 * 		  C++ List Functions

Here are the common std::list functions:
Function 	Description
insert() 	This function inserts a new item before the position the iterator points.
push_back() 	This functions add a new item at the list’s end.
push_front() 	It adds a new item at the list’s front.
pop_front() 	It deletes the list’s first item.
size() 	This function determines the number of list elements.
front() 	To determines the list’s first items.
back() 	To determines the list’s last item.
reverse() 	It reverses the list items.
merge() 	It merges two sorted lists. the sorting is automatic.

More details and funcitons at: https://www.cplusplus.com/reference/list/list/

 * @version 0.1
 * @date 2021-12-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {

	list<int> list1;
	list<int> list2;
	int x;
	int y = 2;

	for (size_t i = 0; i < list1.size()+1; i++){
		cin >> x;
		list1.push_front(x);
		if (i == 10) {
			i = list1.size()+1;
		}
	}

	for (size_t i : list1) { //i takes directly the value found in the list. It's not a position value.
			/*In the list to print an element we use the index directly as a pointer.
		  So we won't have to write list1[i] but directly i into the list istance
		  ThE ITEMS WILL BE DISPLAYED FROM THE BOTTOM TO THE TOP.*/
		cout << "Element of the list: " << i << endl;	
	}

	 list2.push_front(y); //putting y value on top of the second list.
	 list1.merge(list2); //value of list 2 will be putted on top of list 1.
	 list1.sort(); //sorting the list elements, this changes the display from top to bottom unlike above.
	
	cout << "Merged list: " << endl;
	for (size_t i : list1) {
		cout << " " << i << endl;
	}

	system("pause");
	return 0;
	
}