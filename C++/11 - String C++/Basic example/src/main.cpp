/**
 * @file main.cpp
 * @author -_<
 * @brief Included in the string library, this type handles multiple 
 *        or a single char, like a vector. His operands are:
 *        capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
		  resize() :- This function changes the size of string, the size can be increased or decreased.
          length():-This function finds the length of the string
          shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.	
 *        getline() :- This function is used to store a stream of characters as entered by the user in the object memory.
 		  push_back() :- This function is used to input a character at the end of the string.
		  pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.

		  For iterators:
		  begin() :- This function returns an iterator to beginning of the string.
		  end() :- This function returns an iterator to end of the string.
		  rbegin() :- This function returns a reverse iterator pointing at the end of string.
		  rend() :- This function returns a reverse iterator pointing at beginning of string.
		Others:
		  copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
		  swap() :- This function swaps one string with other.
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;
#include <string>

int main() {
	string string1, string2;
	 string::iterator index;
	  char array[10];

	   getline(cin, string1); //normal input. Use getline with strings to avoid buffer problems with blank spaces.
	     getline(cin, string2);

	      //stores single char at the end
	       string1.push_back('a');
	        cout << "String with additional character: " << string1 << endl;
	         string1.pop_back();


	         //iteration with class iterator
	          for (index = string1.begin(); index != string1.end(); index++){
	            cout << " " << *index;
			}

					cout << endl;

					//iteration with normal for
					for (size_t i = 0; i < string1.size(); i++){
						cout << "Normal for: " << string1[i];
		}

				cout << endl;

			//returns string lenght.
		cout << "Lenght: " << string1.length() << endl;

	//exchange string1 content with string2.
	string1.swap(string2);
	cout << "String 1 contains: " << string1 << endl;

	//copy content of string2 into array starting from position 0.
	string2.copy(array, string2.length(), 0);
	cout << "array: " << array << endl;

	return 0;
	
}