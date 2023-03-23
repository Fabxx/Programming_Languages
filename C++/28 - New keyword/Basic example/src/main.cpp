/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief New keyword it's used to create a new variable in the currently available area in the heap (literal memory jump) 
 * from the main stack in memory. It can be useful to address new free memory to a variable in the same stack 
 * which is handled in LIFO and can cause a slowdown in specific cases. This memory area can be created through a pointer
 * where we can access this area in the stack, which is generated at runtime.
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main() {

	int *a = new int(); //empty init with (). 
	int b;

	cin >> *a >> b;
	cout << "Data saved in memory area: " << *a << endl
	     << "Memory address: " << &a << endl
	     << "Memory address of new area: " << &a << endl
	     << "Memory address of old area in b: " << &b << endl;

	return 0;
}