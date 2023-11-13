/**
 * @file main.cpp
 * @author Fabx
 * @brief A namespace it's useful to distinguish functions that might have the same name, and avoids conflicts.
 	  NOTE: a namespace it's useful to create API functions and helper functions that do not belong
	        to a class.
 * @version 0.1
 * @date 2022-07-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

// NOTE: you can also put in variables, structures, classes ecc
namespace Fabx 
{
	void fabcalc();

	// Can also Wrap C structures into C++ namespace. note that to wrap Structure functions you need to write or implement an existing wrapper.

	struct a 
	{
	  int a;
	};
}

void Fabx::fabcalc()
{
	std::cout << 1+1 << std::endl;
}

//then if we don't want to write the namespace every single time, we use the "using" keyword.

using namespace Fabx;

//we can also make namespaces inside other mainspaces, call other made functions inside, and so on.

namespace 1
{
	void a();
	namespace 2 
	{
		void b();
	};
};

int main()
{
	Fabx::fabcalc();
	/*call without namespace
	fabcalc();
	*/
	return 0;
}
