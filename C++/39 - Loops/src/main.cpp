/**
 * @file main.cpp
 * @author Fabxx
 * @brief
            Four types of loops:

            - For loop (no extension)
            - For loop (with extension)
            - While loop
            - Do-while loop

            they all behave the same, repeating the instruction block until a certain condition is met.

            The first one takes three arguments: index, condition (optional), increment/decrement (optional)
            
            The second one takes two arguments: index and array, it automatically scrolls on all the array, 
            handling automatically the range, unless conditions are specified.

            The third one takes one or multiple conditions

            The fourth one same as the thirds, but the bloc executes at least once before the condition is verified

            Loops can also be nested.
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <vector>

void forLoopExtended()
{
   std::vector<int> vec {1, 2, 3};

   for (auto i : vec) { // auto gives to i the type of std::vector, it's less verbose.
      std::cout << i << "\n";
   }
}

void forLoop()
{
   for (size_t i {0}; i < 10; i++) {
      std::cout << "printing...\n";
   }

   // alternative, you can omit arguments.

   for (size_t i = 0; i < 10;) {
      
      if (i == 5) {
         break;
      }

      if (i < 10) {
         i++;
      }
   }

   // nested loop

   for (size_t i {0}; i < 5; i++) {
      for (size_t j {0}; j < i; j++) {
         //do something
      }
   }
}

void whileLoop()
{
   while (true) {
      // this is infinite loop, can be useful under some circumstances.
   }

   int x {0}, y {1};

   while (x == 0 && y == 1) {
      // do something
   }
}

void doWhile()
{
   do {
      // block
   } while (condition);
}

 int main()
 {
 }
