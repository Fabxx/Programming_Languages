/**
 * @file main.cpp
 * @author Prox_y
 * @brief A simple program that shows Object oriented programming.
 * 	      a class it's a function container defined as a object. An 
 * 		  object is something that we use in a certain situation as 
 * 		  a component to complete our task, this is the logic of the 
 *        classes in C++. It helps us to divide the functions as separate
 * 		  objects that we can use anytime for a specific situation,
 * 		  which don't need to follow a structured programming method. 
 * 		  
 * @version 0.1
 * @date 2021-09-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

class printer { //Object name for the class
	
public: //indicates that the functions listed belowe are accessible to every other function.
	void printin_class() { //function contained in a class

		cout << "Hello class" << endl;
	}

	void printin_class_ptr() {
		cout << "Hello pointer calss" << endl;
	}
}; //end of class.

int main() {

	printer myprinter; //pointer to our class, similar to a typedef struct.
	myprinter.printin_class();

	printer *myprinterptr = NULL; //example with pointer.
	myprinterptr->printin_class_ptr();

	return 0;
}