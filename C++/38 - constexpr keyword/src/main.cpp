/**
 * @file main.cpp
 * @author Fabx
 * @brief THe usage of constexpr keyword allows to improve performance of the program by doing the computational 
 * 	      operation of the function at compile time via the CPU, and not at runtime with CPU which can make the program heavier.
 * 
 *		Notes on class constructors:
		-A constexpr constructor is implicitly inline.
		-Restrictions on constructors that can use constexpr:
    	-No virtual base class
    	-Each parameter should be literal
    	-It is not a try block function

		Differences from inline:
		-Does not imply external linkage
		-Does not reduce the overhead in terms of switch of the CPU between short functions, but only reduces the performance impact for the 
		 operations of them. Useful for bigger functions rather than small ones, or if multiple small calculations have to be done.
		-Removes function calls as it calculates them at compile time.
		
		NOTE: For proper usage of this keyword, the variables to pre-calculate must be already initialized
		      and used somewhere to calculate at compile time already. If we have a uninitialized variable
		      the compiler won't know what we are trying to pre-calculate. In this case as you can see both
		      s and x are already initialized, and it can calculate the size of the array as well.

 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

constexpr int func(int s, int x)
{
	return s*x;
}

int main(void)
{
	int s = 2, x = 5;
	std::cout << "Value: " << func(s, x) << std::endl;

	/* can also calculate the size of arrays at compile time, in this case the compiler will already understand that the size is 10, 
	   instead of doing the calculation at execution time. Constexpr is also applicable on each variable type, and will be calculated/initialized
	   at compile time.*/
	int arr[func(s, x)] = {};
	return 0;
}
