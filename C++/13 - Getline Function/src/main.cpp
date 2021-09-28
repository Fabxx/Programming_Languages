/**
 * @file main.cpp
 * @author Prox_y
 * @brief Showing usage of getline function, similar to a fgets in C, getline obtains
 *        from input a sequence of characters on a string variable. Plus, we show how to return 
 * 		  a string from an object. String it's an alternative too an array of char. If the
 *        element that we have to return in a function it's string type, then the funciton must be
 *        the same type, neither char, nor other types.
 * @version 0.1
 * @date 2021-09-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string.h>

using namespace std;

class example {
	public:

	void setname(string name) {
		getline(cin, name);
		cout << name << endl;
	}
	//function that returns the input as string type.
	string getName(string name) {
		return name;
	}
};


int main() {

	string nameparameter;

	example usage;
    usage.getName(nameparameter);
	usage.setname(nameparameter);

}
