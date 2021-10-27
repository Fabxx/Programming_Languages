/**
 * @file main.cpp
 * @author Prox_Y
 * @brief Sometimes we need to do operations on contiguous data, that becomes a problem when
 * 		  the data is stored in different positions, it can result in redundant calculation
 *        of members already used in a specific position.
 *      we MUST have the data in the precise i/j/whatever index position. To do so, we 
 *     handle logically the elements with two or plus vectors. Here are different ways:
 * @version 0.1
 * @date 2021-10-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <vector>
#include <methods.h>
using namespace std;

int main() {
		
	//methods::two_vectors();
	//methods::single_vector();
	methods::single_vector_solution();

	system("pause");
	return 0;
}