/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Showing functions of static_cast<>(), const_cast, and more.
 * 
 * 	static_cast` is used for cases where you basically want to reverse an implicit conversion, 
 * 	with a few restrictions and additions. `static_cast` performs no runtime checks. 
 * This should be used if you know that you refer to an object of a specific type, 
 * and thus a check would be unnecessary. NOTE: casting to char takes ASCII table as reference.
 * 		  
    dynamic_cast only works for pointers or references to polymorphic class types;
    const_cast can't change types, only const or volatile qualifiers;
    reinterpret_cast is for special circumstances, converting between pointers or references and completely unrelated types. 
	Specifically, it won't do numeric conversions.
    C-style and function-style casts do whatever combination of static_cast, const_cast and reinterpret_cast is needed to get the job done.

 * @version 0.1
 * @date 2021-10-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

int main() {

	double x;
    cout << "Insert a  number" << endl;
    cin >> x;
	cout << "Correspondent floating point number: " << static_cast<float>(x) << endl;
	return 0;

    /*34.2654646468746464646465555555555555555555555555555555555555555555555555555555
    Correspondent floating point number: 34.2655*/
}

