/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
            Features of std::string:

            -Dynamic Buffer allocation (no fixed size buffers)

            -std::getline() to get input strings, arguments are the following:

                -Input stream.
                -Input manipulator (optional)
                -object where to store the string.

            -std::ws is one of the input manipulators. Allows to ignore white spaces and \n newline characters. 
             if \n is left in the buffer the next std::cin catches it, and skips the input. 

            -String literals are C strings by default. To create std::string literals use the string literals "s" suffix.
             Both are fine to use. 

        NOTES:
            -Don't pass std::string by value, it's an expensive copy. Pass by reference or use std::string_view (covered further)

            -You can return std::string by value, move semantics make it less expensive as the object is destroyed at return
             and does not generate a copy.

            -If returning a C-style string, use std::string_view return type on the function. (unless you need to return as C string.)

            -a std::string literal excludes by default the implicit \n newline character, which is kept in C strings.

            -Don't use constexpr on std::string, works only on C++ 20/23 and only in some cases. If you need this behavior, use 
             std::string_view.

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <istream>
#include <string>

int main()
{
    using namespace std::string_literals; //used for s suffix
    
    std::string str1 {"Some string, number 45."};

    std::string str2 {};
    std::string str3 {};

    std::getline(std::cin >> std::ws, str1);
    std::getline(std::cin >> std::ws, str2);

    std::cout << str1 << "\n" << str2 << "\n" << str3 
              << "\n" << "String lenght of inputted: " << 
              str2.length() << "\n"; //calling member function of std::string, returns size_t type.

    
    std::cout << "This is a std::string literal with the suffix"s << "\n";
}