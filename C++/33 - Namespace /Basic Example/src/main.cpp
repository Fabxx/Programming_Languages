/**
 * @file main.cpp
 * @author Fabx
 * @brief A namespace it's useful to distinguish functions that might have the same name, and avoids conflicts.
 * @version 0.1
 * @date 2022-07-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

namespace Fabx 
{
	void fabcalc();
}

void Fabx::fabcalc()
{
	std::cout << 1+1 << std::endl;
}

//then if we don't want to write the namespace every single time, we use the "using" keyword.

using namespace Fabx;

int main()
{
	Fabx::fabcalc();
	/*call without namespace
	fabcalc();
	*/
	return 0;
}