/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
      This keyword makes global variables accessible to other files.

      In order to use it, you first define it uninitialized in a file, 
      and then you do a foward declaration of that variable, which can 
      be used by other files.

      It is usally better to define these kind of variables in header files

     NOTES: variables can't be constexpr, because this needs the value to be 
            known at compile time, however with extern we do foward declarations
            and the value is defined later.

            Another good practice is to put extern global variables inside name spaces
            to encapsulate them
      
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 #include <iostream>
 
extern const int g_number;

namespace globals {
     extern const int g_value;
     constexpr int number {3}; //internal linkage, constant values are only accessible in the file where they are declared.
}

 int main()
 {
      std::cout << g_number << "\n" << globals::g_value << "\n"; //file.cpp initializes this variable
 }
