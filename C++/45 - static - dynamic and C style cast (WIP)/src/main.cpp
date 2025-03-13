/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          C-Style cast is done through the () operator, which then takes a type

          static_cast converts the type at compile time.


          NOTE: Don't initialize a value after a static cast is done and not assigned somewhere,
                the casting returns the casted value in memory and when initializing a variable
                after it, the new var will take the casted value left in memory.

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main()
{
  // C Cast, converts x into float

  int x {10};
  
  std::cout << (float)x << "\n";

  // static cast, converts the type at compile time

  int y {5};

  std::cout << static_cast<char>(y) << "\n";

}
