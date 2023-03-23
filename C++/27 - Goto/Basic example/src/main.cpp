/**
 * @file main.cpp
 * @author -_<
 * @brief The goto usage it's useful to do a clear skip inside linked iterations, without overchecking 
 * 		  variables or using extra variables, tho it doesn't have to be abused, because it can create confusing 
 *        code in certain istances. in cases where the for needs multiple checks, this can be more clean 
 *        to skip a for.
 * @version 0.1
 * @date 2022-01-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
	int x = 0;
	for (size_t i = 0; i < 20; i++) {
		for (size_t j = 0; j < 20; j++) {
			x++;
			if (x == 5){
				cout << "X reached 5, skipping for to use related function." << endl;
				goto function; //declaration of goto with name of function, we spare doing i = 20.
			}	
		}
	}
     //function creation.
	 function: {
		cout << "skipped for!" << endl;
	}
}