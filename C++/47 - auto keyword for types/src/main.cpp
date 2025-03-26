/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          The auto keyword lets the compiler determine what is the type of data being used
          for a variable. Useful when we need to create a variable with a very long type.

          In this example, i uses the argument type of the vector to scroll in its elements. 

          Use type deduction for your variables when the type of the object doesn’t matter.

          Favor an explicit type when you require a specific type that differs from the type of the initializer, 
          or when your object is used in a context where making the type obvious is useful.


          This can also work for functions based on their return type. Useful when the return type 
          might be subject to changes. However, auto requires a function to be fully defined. It
          is not possible to do a foward declaration.

          You can also specify which is the return type with a trailing indication, to make
          the code more readable in complex types.

          Type deduction can't be used for parameters until C++20.

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string_view>
#include <vector>

// returns nothing, so auto becomes void. Function is defined in place.
auto func()
{
  std::cout << "something\n";
}


auto func2() -> std::string_view
{
  return "string\n";
}

int main()
{
  std::vector<std::string_view> x {"0", "1", "2"};

  auto n {4.0}; // deducted as double

  /* if on older C++ revisions, this type can be deducted as std::initializer_list<double> rather than double
     if this does not compile, use auto x = 4.0 instead of the initializer brackets.
  */
  auto num {4.0}; 

  for (auto i : x) {
    std::cout << i << "\n";
  }
}
