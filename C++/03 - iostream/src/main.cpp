/**
 * @file main.cpp
 * @author Fabxx
 * @brief the iostream provides two main buffers:
 * 
 *      -input buffer: used to insert data into the stream
 * 
 *      -output buffer: used to output data from the stream
 * 
 * 
 *      as we saw before std::cout is associated with the output buffer to show the output of stuff we pass to it
 *      with the "<<" insertion operator.
 * 
 *      we can use std::cin to get input from the user and insert data into a variable with the ">>" extraction operator
 * 
 *      like cout, you can concatenate the input of more variables in one cin.
 * 
 *      NOTES:
 * 
 *          1) Each line of input data in the input buffer is terminated by a '\n' character.
 * 
 *          2) std::cin is buffered because it allows us to separate the entering of input from the 
 *             extract of input. We can enter input once and then perform multiple extraction requests on it.
 * @version 0.1
 * @date 2024-09-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(void)
{
    int x {}, y {};

    std::cout << "Insert a number: ";

    std::cin >> x;

    std::cout << x << '\n';

    std::cout << "Insert two numbers: ";

    std::cin >> x >> y;
    
    std::cout << "Value of x: " << x << '\n'
              << "Value of y: " << y << '\n';
}
