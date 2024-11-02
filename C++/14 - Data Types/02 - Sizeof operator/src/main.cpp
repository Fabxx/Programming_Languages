/**
 * @file main.cpp
 * @author Fabxx
 * @brief Sizeof operator takes the size of the data type or the variable, and returns the number of bytes of that data.
 * 
 *         NOTES:
 *                - sizeof cannot determine the size of a dynamically allocated object.
 *                - bigger data types are optimized internally for the CPU to operate faster
 *                  using smaller types won't always give a performance improvement.
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(int argc, char *argv[])
{
    if (sizeof(int) == 4)
    {
        std::cout << "integer is 4 bytes" << std::endl;
    }
}
