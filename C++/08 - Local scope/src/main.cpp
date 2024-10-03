/**
 * @file main.cpp
 * @author Fabxx
 * @brief Scope can have two types of visibility:
 * 
 *          -Local: data defined in this type of scope have limited visibility form the program.
 * 
 *          -Global: Data defined in this scope are visible in any context of the program. So any
 *                   function or other type of data can access to this defined data.
 * @version 0.1
 * @date 2024-09-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>


int a = 5; // global scope, a is not enclosed anywhere.


void func(void)
{
    int b = 10; // local scope, b is visible only inside func.

} // end of scope, any local data stored in the function will be destroyed when the function ends.

int main(void)
{
    std::cout << "Hello world!" << std::endl;
}
