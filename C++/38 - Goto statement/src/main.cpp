/**
 * @file main.cpp
 * @author Fabxx
 * @brief
         Acts as a inconditional jump. It is preferred to not use this.

         Spaghetti code is code that has a path of execution that resembles a bowl of spaghetti 
         (all tangled and twisted), making it extremely difficult to follow the logic of such code.

         Gotos can make it difficult to understand the flow of the code.
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>



 int main()
 {
   input:
      int x {0};

      std::cin >> x;
   ; // end of label scope

      if (x > 5) {
         goto input; //jumps to defined label
      }
 }
