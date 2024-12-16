/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
         When creating a variable of any type, a copy in memory is made for allocating that data into the object. 
         For strings this is slow and inefficient. Since C++ 17 there is std::string_view.

         In the example code, you can see that str it's not a pointer so we're not passing by address
         (reference), but we are passing by value. Normally, this would make a copy of the passed value
         from main() stack to print() stack, so s gets copied into str argument.

         String_view behaves similar to pass by reference, it doens't make a copy of the string,
         but references the same address to avoid the copy.

         If you need read-only strings by argument or simple objects, use std::string_view instead of
         std::string. 


         a string_view can be initialized with std::string or a C string literal.

         read-only means you can access and use the string, but not edit it.

         
        NOTES:

            -You can't initialize std::string_view with a std::string type, because that needs to make a copy
             in memory.

            -You can constexpr a std::string_view, because its value is known at compile time, it is not needed
             a copy first to determine the content.

            -If you need to edit the string at runtime, you have to use std::string instead. To avoid making a copy of it
             you can use it as pointer (pass by reference will be discussed further)

        
        In short:

         When you need a constant string that does not need to be edited, either as a object or 
         argument, use std::string_view. If you need to work with the value use std::string, and if
         used as argument make it a pointer to avoid making a copy.

         If you want you can allocate the string buffer at compile time instead of runtime with 
         constexpr


 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string_view>

 //str will reference s address from main, not making a copy.
void print(std::string_view str)
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view s {"My string"}; 

    //Will be initialized at compile time instead of runtime.
    constexpr std::string_view str {"Valid constexpr string"};

    print(s);

    //can be re-assigned, this value won't be copied like the first initialization.
    s = "new string";

    print(s);
}
