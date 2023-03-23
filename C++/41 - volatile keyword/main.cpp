/**
 * @file main.cpp
 * @author Fabxx
 * @brief Volatile it's used to avoid unwanted optimizations on the code while compiling 
 *        that may cause unwanted results where:
 * 
 *        -Code may not work as expected when optimization is turned on. 
          -Code may not work as expected when interrupts are enabled and used.

          Objects declared as volatile are omitted from optimization because their values can 
          be changed by code outside the scope of current code at any time. Some examples are:

          -Global variables modified by an interrupt service routine outside the scope
          -Global variables within a multi-threaded application

          where changes are affected by the optimized code.


          In this code example, if we apply volatile to local, the re-initialization of ptr will 
          be able to modify the memory area of "local" instead of himself, so that ptr is linked 
          to the memory of "local".

          NOTE: this is affected if "local" is const. Also these effects are compiler specific, so you
                might have different behaviors. this was tested on GCC/G++.
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

int main(void)
{
    const volatile int local = 10;
    int *ptr = (int*)&local;
    
    std::cout << "First value: " << local << std::endl;
 
    *ptr = 100;
 
    std::cout << "Modified value: " << local << std::endl;
 
    return 0;
}