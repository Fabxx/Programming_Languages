/**
 * @file main.cpp
 * @author Fabxx
 * @brief we can initialize variables by using expressions, or functions that return a value
 * 
 *        if you want an operation to take priority over a value, use parentheses.
 * 
 *         in this case the expression done before is 3 * 2, the result gets added to 5.
 * @version 0.1
 * @date 2024-09-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

std::string func() {
    return "hello";
}

int main(void)
{
    std::string text {func()};
    int x {(3 * 2) + 5};
    int y {x - 2};

    std::cout << "Text: " << text << "\n" << "x value: " << x << "\n" << "y value: " << y << "\n";
    return 0;
}
