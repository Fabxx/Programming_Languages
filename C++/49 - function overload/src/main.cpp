/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          Consist in giving parameters to a function which will be filled with values
          during runtime.

          You can overload a function through copy of values or references, we'll discuss this later on.

          a parameter can have a default value which does not need to be overloaded form another function.

          Once a default parameter has been defined, all the parameters afterwards must be default as well.

          If the function has foward declaration put the argument in the declaration itself, and then define
          the function

          Default arguments don’t work for functions called through function pointers
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

// y is a default value
void func(int x, int y = 20, int z = 30)
{
  std::cout << x << "\n" << y << "\n";
}

// declaration with default argument, definition will take the value by default.
void decl(int x, int y = 10);


void decl(int x, int y) 
{
  std::cout << x << y << "\n";
}

int main()
{
  func(10); // argument overloaded with 10.

  decl(25);
}
