/**
 * @file main.cpp
 * @author Fabxx
 * @brief With the auto keyword, the compiler understands what type the variable is judging from its initializer.
 * 		  this keyword becomes useful to not write multiple times explicit types that the compiler already knows
 *        from their values.
 * 
 * 		 The decltype keyword instead lets us retreive the data type from a initialized variable, and can also be used as 
 *       a type assignator to the variables.
 * @version 0.1
 * @date 2023-02-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

int main(void)
{
	//Assignation of a integer will make this var as "int"
	auto var = 1;

	//getting var type and giving it to another_var
	decltype(var) another_var;
	
	//typeid returns the type of the auto variable.
	std::cout << "Type of data: " << typeid(var).name() << std::endl;

	//The use of auto can be mostly useful for iterators as well:
	for (auto i = 0; i < 2; i++) {
		/* code */
	}
	
}