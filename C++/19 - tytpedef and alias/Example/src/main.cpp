/**
 * @file main.cpp
 * @author Prox_y
 * @brief Alias method it's a new standard to define new types of data in C++, with the usage of using keyword.
 * 		  in C we used typedef.
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;
using Newtype = int; //typedef equivalent in C++
typedef double NewtypeC; //standard typedef.
using vett = vector<double_t>

int main() {
	Newtype a = 0;
	cout << "Hello world! Type number: " << a  << endl;
	return 0;
}
