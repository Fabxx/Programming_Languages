/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *          Void represents a incomplete type. The compiler doesn't know how much memory to allocate
 *          to this specific type. Use cases:
 *          
 *          - functions that don't return a value
 *          - any type of pointer as argument (like void *var) 
 *          - if void is in the argument, it indicates that the function doesn't take any arguments.
 *            compatible with C but in C++ this practice is considered deprecated. Just leave it empty if 
 *            it takes no args.
 * 
 * 
 *          NOTES: 
 * 
 *                -the _t suffix for variable names stands for type.
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

void wontReturn()
{
    std::cout << "wontReturn" << std::endl;

    return ""; //error, void funcs should NEVER return.
}
int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
}
