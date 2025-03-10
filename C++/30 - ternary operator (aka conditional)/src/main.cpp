#include <iostream>

/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
        A faster way to get the equivalent of if-else conditions.

        Useful when:

            Initializing an object with one of two values.
            Assigning one of two values to an object.
            Passing one of two values to a function.
            Returning one of two values from a function.
            Printing one of two values.
        
        For complex statements it's best to not use the ternary operator

        Syntax: condition ? true statement : false statement

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 int main()
 {
   constexpr int a {10};

   // Usual if-else block
   if (a == 0) {
       std::cout << "yay\n";
   } else {
       std::cout << "nay\n";
   }

   /* ternary operator makes it more clean
      if you write like this, the insertion operator <<
      has precedence over the ternary operator, which won't
      be resolved first.
   */

   std::cout << (a == 10) ? "yay\n" : "nay\n";

   /*
       to avoid, use parhenteses to prioritize the ternary
       operator as a whole, not just the condition.
   */

    std::cout << (a == 10 ? "yay\n" : "nay\n");
 }
