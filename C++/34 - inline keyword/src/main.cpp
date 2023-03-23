/**
 * @file main.cpp
 * @author Fabxx
 * @brief Inline it's used on functions that have a shorter execution time, than the switch time in memory from the CPU
 * 		  when switching from a function call to the other. (function switch overhead)
 * 		 
 * Pros:
 * 		 -Helps reducing/removing overhead for small functions switching by removing jump instructions and adding the function body
 		  directly instead.
 * 		 -Increases code efficiency, and this operation is done at compile time.
 * 		 -saves the overhead of push/pop variables on the stack when function is called and of a return call from a function.
 * 		 -Context specific optimization for the inline body from the compiler.
 * 
 * 
 * Cons:
 * 		 -If abused, can cause overhead in CPU registers due to the fact that when inline function body is substituted at the point of function call, 
 * 		  total number of variables used by the function also gets inserted. So the number of register going to be used for the variables will also 
 * 		  get increased
 * 		-Too many inline functions increase drastically the size of the compiled binary because of duplication of code.
 * 		-can reduce your instruction cache hit rate, thus reducing the speed of instruction fetch from that of cache memory to that of primary memory.
 * 		-May increase compile time.
 * 		-In embedded systems it's more important the size of the code than the speed, inline can cause more overhead if anything in this case.
 * 
 * Ignore cases:
 * 
 * 		-If a function contains a loop. (for, while, do-while)
 *		-If a function contains static variables.
 * 		-If a function is recursive.
 *		-If a function return type is other than void, and the return statement doesn’t exist in function body.
 *		-If a function contains switch or goto statement.

 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

inline int short_function()
{
	return 5*5;
}

//in class functions it's good practice doing like so:

class A 
{
	public:
		void func();
};

inline void A::func()
{
	//code
}

int main(void)
{
	std::cout << short_function() << std::endl;
	return 0;
}
