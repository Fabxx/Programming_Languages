/**
 * @file main.cpp
 * @author Fabxx
 * @brief Description:
 * 
 *           A function parameter is a variable used in the header of a function. 
 *           they are initialized with a value provided when you call the function.
 * 
 *          
 * @version 0.1
 * @date 2024-09-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

void function(int x, int y) // my parameters.
{
    std::cout << "x: " << x << " y: " << y << '\n';
}

int func2(int x, int y)
{
    return x * y;
}

void anotherFunc(int) //unnamed parameter, it has no name since it's not used and won't generate a warning. We can comment the name of the parameter as wells
{

}

int main(void)
{
    function(5, 7); //5 and 7 are my arguments that will pass the value to x and y
    std::cout << func2(5, 5) << '\n'; //will print 25
    std::cout << "Hello world!" << '\n';
}
