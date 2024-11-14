/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *      
 *      Two special F.P Numbers:
 
 		-Inf: represents a positive/negative infinity
 		
 		-NaN: not a number, a mathematically invalid number. there are different types of these.
 		
 		these are available only on IEEE 754 standard.

        NOTES:

            -In general it is not recommended to divide by 0.0
 			   
 * 
 * 
 *        
 * @version 0.1
 * @date 2024-11-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(int argc, char *argv[])
{
    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (m)
    std::cout << nan << '\n';
}
