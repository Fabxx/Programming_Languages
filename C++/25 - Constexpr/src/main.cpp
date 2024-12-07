/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
            -Constexpr are expressions and values calculated at compile time instead of runtime.

            -The compiler makes those calculations that otherwhise the CPU would make at runtime.

            example:

            int x {3 + 4};

            if using:

            constexpr int x {3 + 4};

            the compiler replaces the value of int with 7. the CPU would then read directly 7 as a result.

             NOTES:

                -Constexpr can't be used on:
                    
                    -literal values that aren't constant and already defined.
                    -new, delete, delete[], throw, typeid and operator keywords.
                    -functions calls to non constexpr functions.
                    -function parameters, because their value it's known at runtime only.

            DIFFERENCES:
                    -Const means that an object cannot be modified at runtime.
                    
                    -Constexpr means that you evaluate an expression at compile time instead of runtime.

                    -Constexpr might not be compatible with dynamic memory types.
 * @version 0.1
 * @date 2024-12-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

constexpr int func() {
    return 2*3;
}

int main(int argc, char *argv[])
{
    constexpr int expression {7*4};

    std::cout << expression << "\n";
}
