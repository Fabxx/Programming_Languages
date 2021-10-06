/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Showing functions of static_cast<>(), const_cast, and more.
 * 
 * 	static_cast` is used for cases where you basically want to reverse an implicit conversion, 
 * 	with a few restrictions and additions. `static_cast` performs no runtime checks. 
 * This should be used if you know that you refer to an object of a specific type, 
 * and thus a check would be unnecessary. NOTE: casting to char takes ASCII table as reference: https://www.asciitable.com/
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

    char string; //an example: insert 7 to get the matching. 55 it's 7 in ASCII
    int x; 
    cout << "Insert a character, you can insert a single number or symbol" << endl;
    cin >> string;
    cout << "Insert a number" << endl;
    cin >> x;

         if (static_cast<int>(string) == x){
            cout << "The character has the same ASCII value of x:" << static_cast<int>(string) << endl;
            } else{
            cout << "ASCII code is different: " << static_cast<int>(string) << endl << 
                    "Character inserted: " << string << endl 
                    <<"Integer inserted: " << x <<  endl
                    << "ASCII value of integer: " << static_cast<char>(x) << endl;
        }
        return 0;
}

