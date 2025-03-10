/**
 * @file main.cpp
 * @author Fabxx
 * @brief
           If you are comparing a constant variable that can be evaluated at compile time,
           the compiler can determine which block of instructions to keep at 
           compile time as well.

           In this case, at compile time the first If condition will be discarded, only the else will remain
           in the instructions

           Use this when comparisons are made on a constant value, or on a flags that you know on certain
           systems will have a specific condition as a result. The CPU won't have to do the compare
           instruction at runtime.
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>



 int main()
 {
   constexpr float g = 9.8f;

   if constexpr (g > 10.0f) {
      std::cout << "Printing first block\n";
   } else if constexpr (g == 5.0f) {
      std::cout << "Printing second block\n";
   } else {
      std::cout << "Printing Third block\n";
   }

   /**
    * will be compiled as:
      
      constexpr double gravity{ 9.8 };

      std::cout << "Printing Third block.\n";

      return 0;
    * 
    */
 }
