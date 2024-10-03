/*
    This function is defined  but not declared anywhere, if we call this into main the compilation will fail.
    We need to declare the function prototype inside the main file in this case.

    Another practice is to use header files, which we'll see later.
*/

#include <iostream>
void function()
{
    std::cout << "something!\n";
}