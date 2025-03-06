/**
 * @file main.cpp
 * @author Fabxx
 * @brief
           Can be used inside loops.

           Break interrupts the loop and exits the block, return can behave the same when expected from a function.

           Continue skips the current iteration, and goes to the next one until condition
           is met.
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>



 int main()
 {
   for (size_t i {0}; i < 5; i++) {
      if (i == 4) {
         break;
      } else {
         continue;
      }

      std::cout << "Printing\n"; // this will never be printed, because continue skips these instructions
   }

   for (size_t i {0}; i < 5; i++) {
      if (i == 2) {
         return i; //exits the loop and function returns.
      }
   }
 }
