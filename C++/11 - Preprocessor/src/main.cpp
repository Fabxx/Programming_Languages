/**
 * @file main.cpp
 * @author Fabxx
 * @brief Preprocessors are instructions that are executed before the code is compiled.
 * 
 *         the #include instruction is a preprocessor directive, which tells the compiler to include 
 *         a specific file.
 * 
 *          we can also use the define preprocessor to define our custom data.
 * 
 *          we can make conditions on definitions. If a thing is defined or not, the compiler will compile
 *          that piece of code and execute it, or selse it will be discarded.
 * 
 *          - #if 0 is a defailt condition to tell the compiler to not compile that specific code.
 *            you can swithc it to #if 1 to compile it.
 * 
 * 
 *      NOTES:
 * 
 *              -It's better to define constants with uppercase letters and when possible in header files.
 *              -Avoid macros with substitution text unless no viable alternatives exist.
 *              -most forms of #if and #elif do macro substitution within the preprocessor command.
 * @version 0.1
 * @date 2024-10-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

#define CONSTANT "my string" //my custom data



int main(int argc, char *argv[])
{
    #ifdef CONSTANT
    std::cout << "your constant has been defined\n";
    #endif

    #if 0 // don't compile from here
    std::cout << "this code will not be compiled\n";
    #endif

    std::cout << CONSTANT << std::endl;

}
