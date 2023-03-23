/**
 * @file main.cpp
 * @author Fabxx    
 * @brief The & operator performs a multiplication operation on the bits of a variable. here's a table of results:
 *         
 *         0 1 = 0
 *         0 0 = 0
 *         1 0 = 0
 *         1 1 = 1 //only if both bits are 1 the multiplication returns 1 on the bits.
 * 
 *          In this example we take two numbers and perform the AND op. on their bits, they will return a
 *          result equal to the other equivalent binary number
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

    //will output 1 in this case.
    std::cout << "AND result: " << (a & b) << std::endl;
    return 0;
}