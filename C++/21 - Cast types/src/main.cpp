/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *         It is possible to do implicit type conversion, but i won't cover it since its generally
           bad practice. We will use the following:

           -static_cast<type>(data): converts the given data into the indicated type.


           NOTEs:

                -Converting an unsigned integral value to a signed integral value will result 
                 in implementation-defined behavior prior to C++20 if the conversion can't be represented
                 in the signed type.
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
   char ch {'c'};
   std::int8_t val {};

   std::cin >> val; // input is treated like char

   std::cout << val << "\n";

   std::cout << static_cast<int>(ch) << "\n"; //converts c into its numerical equivalent based on ASCII table.

   std::cout << static_cast<int>(val) << "\n"; //converts the char equivalent value into int.
}
