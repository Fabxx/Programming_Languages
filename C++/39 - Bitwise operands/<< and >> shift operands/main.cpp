/**
 * @file main.cpp
 * @author Fabxx
 * @brief  -Left shift operand "<<" applies an operation of power on the used variable, alongside a multiplication.
 *          in the example below, a << b is equivalent of 5 * 2^5, where 2 is the base applied on b, and it's elevated by
 *          b itself, moving the binary digits of the numbers.
 *          
 *          -Right shift operand ">>", same operation as above, but instead it's divided.
 * 
 *          Limit cases:
 * 
 *          -Negative numbers lead to a undefined behavior
 *          -Shift that goes above the type limit leads to a undefined behavior:
 *           example int16_t is 65535 max, if the shift is above the number it will not 
 *           display the correct values.
 * 
 *          
 * @version 0.1
 * @date 2023-03-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

int main(void)
{
    int a = 5, b = 5;

    std::cout << "Left Shifted result: " << (a << b) << std::endl;
    std::cout << "Right Shifted result: " << (a >> b) << std::endl;
    return 0;
}