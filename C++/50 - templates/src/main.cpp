/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          Templates allow us to work with different data types with one definition.

          C++ supports 3 different kinds of template parameters:

          - Type template parameters (where the template parameter represents a type).
          - Non-type template parameters (where the template parameter represents a constexpr value).
          - Template template parameters (where the template parameter represents a template).

          it is recommended to use single capital letters to indicate what kind of argument we are trying to use.

          Once a function has been declared and defined, we need to call it with explicit parameters in order
          for the compiler to generate the function with a specific type from the template.

          The function is istantiated once, further calls will referr the first instantiation.

          If the type changes, a new function is istantiated.

          Use function templates to write generic code that can work with a wide variety of types whenever you have the need.
          
          This represents the concept of Polymorphism
          
          NOTE: template<typename T> and template<class T> are equivalent in this context. I preferr
                using typename to make the code more clear.

                T can only represent a single type, if passing two arguments of different types on T, compilation
                will fail. The ideal solution is to define multiple typenames for different types.

                If we need foward declaration, we can specify the return type of the function by using std::common_type_t<>

                This tells to the auto keyword to determine the type of the function based on the given arguments.

                Since C++ 20, you can use auto keyword on template functions and arguments

              
              If a template function must be shared in multiple files, define the template in the header and then include it in the 
              source.



 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <type_traits>
#include "header.hpp"

// function of any Type with arguments of any type
template<typename T>
T func(T x, T y)
{
  return (x < y) ? y : x;
}

int func(int x, int y)
{
  return (x < y) ? y : x;
}

// can also have specific types in a template function
template<typename T>
void function(T x, int y)
{
  std::cout << x+y << "\n";
}

/* Defining multiple typenames to have different types
   The return type will be assigned based on the generated final value
   that will be returned.
*/
template<typename T, typename U>
T generic(T x, U y)
{
  return x * y;
}


// foward declaration
template<typename T, typename U>
auto foward(T x, U y) -> std::common_type_t<T, U>;



int main()
{
  std::cout << func<int>(10, 15) << "\n";

  std::cout << func<>(10, 15) << "\n"; // deducts int function from arguments or return type.

  std::cout << func(10, 15) << "\n"; // calls non template function

  function(4.0f, 10); // call with a generic and fixed type.

  std::cout << generic<int, double>(10, 4.5) << "\n"; // explicit double type

  std::cout << generic<int>(10, 4.5) << "\n"; // one type is deducted, the other is explicit. Both can be deducted or explicit.

  std::cout << foward(10, 5.6f) << "\n"; // auto will resolve as int since result is int.

  std::cout << headerFunction<>(10) << "\n"; // calling template function from header file.
}


template <typename T, typename U>
auto foward(T x, U y) -> std::common_type_t<T, U>
{
    return (x < y) ? y : x;
}