/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *      	Scientific notation is used to write large numbers in a more readable way.
 
 		The formula is the following:
 		
 		significand x 10^exponent where:
 		
 		-The significand is the base number
 		
 		-10 is a constant. We represent the numbers on decimal base.
 		
 		-The exponent is represented by the numbers that we consider after the significant digits.
 		
 		
 		example:
 		
 		2.75400000000 would be written as:
 		
 		2.754 x 10^8.
 		
 		in C++ to write the exponend we use the "e" character:
 		
 		2.754e8
 		
 		the exponent can also be negative:
 		
 		2.754e-2, which is 2.754 x 10^-2 = 0,275400000000
 		
 		the first digits are considered the more significant ones, if we use the first digits the number
 		is more precise, example:
 		
 		pi: 3.14159
 		
 		becomes 3.14e3, because after the digit 4 there are 3 numbers left.
 		
 		
 	NOTES:
 	
 		-Drop zeroes if there is no decimal point:
 		
 			27400000 becomes 2,74e4
 		
 		-Keep zeroes after a decimal point
 		
 		2740.000 becomes 
 		
 		
 * 
 * 
 *        
 * @version 0.1
 * @date 2024-11-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
}
