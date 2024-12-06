/**
 * @file main.cpp
 * @author Fabxx
 * @brief  -Left shift operand "<<" applies an operation of power on the used variable, alongside a multiplication.
 *          a << b is equivalent of a * 2^b, where 2 is the base applied on b, and it's elevated by
 *          b itself, moving the binary digits of the numbers.
 *          
 *          -Right shift operand ">>", same operation as above, but instead it uses a division.
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

#include <stdio.h>

int main(void)
{
    int a = 5, b = 5;
    
    printf("Left shift result: %d\nRight Shift Result: %d\n", (a << b), (a >> b));
    return 0;
}
