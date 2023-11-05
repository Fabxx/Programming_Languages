/**
 * @file main.cpp
 * @author Fabxx    
 * @brief The ^ operator performs a exclusive comparison operation on the bits of a variable. here's a table of results:
 *         
 *         0 1 = 1
 *         0 0 = 0
 *         1 0 = 1
 *         1 1 = 0 //always returns 0 if the two bits are equal.
 * 
 *          In this example we take two numbers and perform the OR op. on their bits.
 * 
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

int main(void)
{
    //a = 00000111, b = 00001001
    int a = 7, b = 9;

    //will output 14 in this case.
    std::cout << "XOR result: " << (a ^ b) << std::endl;
    return 0;
}
