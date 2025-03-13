/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          using keyword acts as an alias for default types, equivalent of 
          typedef in C.

          It becomes comfortable when you have to use long syntax for a complex type
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string>
#include <utility>
#include <vector>

using Flt = float;
using VectorPair = std::vector<std::pair<std::string, int>>;

int main()
{
  Flt y {0.0f};

  VectorPair myPair {};
}
