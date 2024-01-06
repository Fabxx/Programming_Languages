/**
 * @file main.cpp
 * @author Fabxx    
 * @brief The ~ operator performs a inversion operation on the bits of a variable. here's a table of results:
 *         
 *         0 = 1
 *         1 = 0
 *          
 *          it's basically a ! negation.
 * 
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main(void)
{
    //a = 00000111
    int a = 7;
    
    printf("NOT Result: %d\n", (~a));
    return 0;
}
