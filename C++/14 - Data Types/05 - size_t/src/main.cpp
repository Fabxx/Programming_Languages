/**
 * @file main.cpp
 * @author Fabxx
 * @brief sizeof(type) operator returns a value of std::size_t. Sizeof returns the size of the given type in bytes,
 *        as an alias of std::size_t, which returns a unsigned integral value.
 * 
 *        Basically size_t can store the returned value by sizeof.
 * 
 *          NOTES:
 *              -size_t also varies in size depending on the architecture and target compilation.
 *              -size_t cannot hold a size of a type that exceeds the maximum value that it can store.
 *               
 *              Example:
 *                      -Architecture x86 (32 bit)
 *                      -size_t can hold a max of 32 bit on that architecture, if i have a 64 bit size,
 *                       the type is considered "ill-formed".
 * @version 0.1
 * @date 2024-11-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main()
{
    std::size_t typeSize {sizeof(int)};
    std::cout << typeSize << "\n";
}
