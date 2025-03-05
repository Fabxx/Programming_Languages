/**
 * @file main.cpp
 * @author Fabxx
 * @brief
            - A static local variable will be kept in memory, not destroyed
            - A static function can be called only inside the same file where it was declared

            The index is kept in memory in this example, so it will continiously increase/decrease
            the index when its called.

            NOTE: You can't apply constexpr to a function that has a known value at compile time, but it is local to the function.
                  Values on arguments are required.

                  It's good practice to use the s_ on a variable to indicate that it's a static variable
         
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

static inline void function()
 {  
    static int index {0};

    if (index == 0) {
        index++;
    } else {
        index--;
    }
    std::cout << index << "\n";
 }

 static void localVar()
 {
    static int s_i {0};
    s_i++;

    std::cout << "Index value: " << s_i << "\n";
 }


 int main()
 {
    function();
    function();
    localVar();
    localVar();
 }
