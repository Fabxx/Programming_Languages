/**
 * @file main.cpp
 * @author Fabxx
 * @brief
         Acts like a if-else block, however it provides a "default" fallback in case all
         of the previous conditions are not met.

         Each case must have a break at the end to interrupt the execution and exit the switch
         and also has a local scope

         A good practice is to not indent labels of cases to make them more readable
         
         Prefer a switch over if with integrals or enums
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

   switch (x) {
   case 1:
      std::cout << "printing this string\n";
      break;
      
   case 2:
      std::cout << "printing other string\n";
      break;

   default:
      std::cout << "no previous conditions met\n";
   }
 }
