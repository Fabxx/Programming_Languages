/**
 * @file main.cpp
 * @author -_<
 * @brief Showing usage of random library to generate random numbers
 *        with c++11 random library instead of rand(); The mersenne twister algorithm uses 
 *        positive integers prime numbers as a power for the numbers given, for more information see:
 *        https://en.wikipedia.org/wiki/Mersenne_Twister
 * @version 0.1
 * @date 2021-12-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <random>
using namespace std;

int main() {
	//seed init to randomize
	random_device nameofseed;
	//mersenne twister algorithm init, name of algorithm + twister function with parameter seed.
	mt19937 mt(nameofseed());
	/*Calling class template to specify data type to operate with and the range of numbers
	 NOTE: dbl_min and dbl_max can be changed with  explicit numbers too. They just indicate the range.*/
	uniform_real_distribution<double_t> dist(__DBL_MIN__, __DBL_MAX__);
	for (size_t i = 0; i < 10; i++){
		//printing mersenn twister output with the distance we gave.
		cout << "" << dist(mt) << endl;
	}
	return 0;
	
}
