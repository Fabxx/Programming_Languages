/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          cin class offers fail() method to check if the 
          input type does not match the buffer type where to store the data

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

int main()
{
  int x {0};

  std::cin >> x;

  std::cin.fail() ? std::cout << "invalid input type\n" : std::cout << "input is integer\n";
}
