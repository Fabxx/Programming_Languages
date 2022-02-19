/**
 * @file main.cpp
 * @author Prox_y
 * @brief This program shows how we can delete a specific element of an array/vector. Size is not constant
 *        so we can dinamically change the size of the array to reduce the size, and print again the
 * 		  arr/vector with the new size and new number of elements.
 * @version 0.1
 * @date 2021-10-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> vett;


class func {

private:
	vett vector1;
	int position = 0;
	unsigned long long size = 10;
	
public:

		void input(int arr[]) {
			for (size_t i = 0; i < size; i++){
			cin >> arr[i];
			vector1.push_back(arr[i]);
		}

	}
		void del_elem(int arr[]) {

	  /*starting from the position we want to delete, we assign the current position to it's next element, until the element we want 
	  to delete reaches the end, then we delete it by using size-- to decrease the array size.
	  size-1 it's to avoid a segmentation fault. Once all the elements are swapped with their nexts,
	  we reduce the size by 1 after a single element has been deleted.
	  */
			
	  		cout << "Select element to delete." << endl;
	  		cin >> position;
			
			for (size_t i = position; i < size-1; i++){
				arr[i] = arr[i+1];
				vector1[i] = vector1[i+1];
			}
				size--;

		}

		void output(int arr[]) {
			cout << "Array:" << endl;
				for (size_t i = 0; i < size; i++) {
					cout << "Array: " << arr[i];
				}

			cout << "Vector:" << endl;
			for (size_t i = 0; i < size; i++){
				cout << "Vectyor:" << vector1[i];
			}
		}
};



/*NOTE: this is an example with a known position, if you want to remove a duplicate with a generic array, 
	  you first have to order the array, then find the duplicate which will be [i] next to [i+1]:
	  1 4 7 2 3 4 2 0 will be: 0 1 2 2 3 4 4 7, then we can do it this way:*/

			void alternative_deletition(int arr[]) {
				
				for(size_t i = 0; i < arrsize-1; i++) {
					if (arr[i] == arr[i+1]) {
						arr[i] = arr[i+1];
					}
					size--;
			}

int main() {

	int array[10];

	 func functions;
	 functions.input(array);
	 functions.del_elem(array);
	 functions.output(array);
	
	return 0;
	
}
