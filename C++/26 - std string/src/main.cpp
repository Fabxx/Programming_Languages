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

            -To create a std::string literal use the "s" suffix. Default string literals are const char * 

        NOTES:
            -Don't pass std::string by value, it's an expensive copy. Returning by value it's fine.

            -a std::string literal excludes by default the implicit \n newline character, which is kept in C strings.

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
