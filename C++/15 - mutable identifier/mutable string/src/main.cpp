/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Example with char string.
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

class myclass {
   public:
      char string1 = 'A';
      mutable char string2 = 'B';

		   myclass() { //class constructor, required by the constant to operate.
          string1 = 'F';
          string2 = 'T';
		 }
};
int main() {
    const myclass access;
    cout << "Chars before access:\n";
    cout << access.string1 << " \n" << access.string2 << " \n";
    //access.string1 = 'S'; //gives error, lvalue not editable.
    access.string2 = 'G';
    cout << "Chars after access:\n";
    cout << access.string1 << " \n" << access.string2 << " \n";
   return 0;
}