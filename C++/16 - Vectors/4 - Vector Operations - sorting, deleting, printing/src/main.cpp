/**
 * @file main.cpp
 * @author Prox_y
 * @brief Showing with OOP how to input, order, delete a specific element and output a vector.
 * 		  In C++ the function "swap" has been automatically included, unlike C where
 *        you have to do a separate void function with pointers to do the swap, see:
 * 		  https://github.com/Prox-y/Programming_Languages/blob/master/C/12%20-%20Sorting%20Algorithms%20with%20simple%20cases/Bubble_Sort.c
 *		  
 		  or:
 		  https://github.com/Prox-y/Programming_Languages/tree/master/C%2B%2B/22%20-%20Swap%20function%20-%20integrated%20and%20manual%20implementation/swap%20-%20manual%20implementation 
 *  
 * 		
 *        
 * @version 0.1
 * @date 2021-11-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <libs.h>

int main() {
	vectors::input();
	vectors::ordinamento();
	vectors::rimozione_duplicati();
	vectors::output();
	system("pause");
		
		return 0;

		
}

