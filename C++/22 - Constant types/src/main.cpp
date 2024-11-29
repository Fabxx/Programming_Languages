/**
 * @file main.cpp
 * @author Fabxx
 * @brief Two types:

 *        -Named constants: values associated with a identifier (name)

          -literal constants: values not associated with a identifier

          constants can be:

          -Variables
          -Macros
          -Enum values.

          You can initialize constants by using non constant values

          Constants in some cases can help with code optimization, or have less bugs
          because we expect the value to remain the same.


          NOTES:
                -Constant types must be initialized
                
                -Use the const keyword before the type.

                -For the naming convention you can use whatever you preferr, in my case
                 i still use the one from C.

                 -DON'T use const for function parameters
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

#define MY_CONSTANT 5 //a macro constant

void func(const int data)  { //!wrong

}

const int value() { //while valid code, don't use const when returning literals.
    return 10; 
}

int main(int argc, char *argv[])
{
   const char c {'c'}; //this value cannot be changed further in the code

   int num {10};

   const int const_num {num}; //init from non const

   std::cout << "This string literal is a constant and cannot be changed!" << "\n";

   std::cout << "my constant: " << MY_CONSTANT << "\n";
}
