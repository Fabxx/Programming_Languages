/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *          If statements can be used as conditions to do/not do something.
 * 
 *          The statements can be concatenated with else if blocks or a final else block.
 * 
 *          They can be used with many data types for comparisons and verifications. In this example i'm using
 *          numbers.
 			   

            You can also exit from a function earlier by returning before in a specific block when
            a condition is met
 		
 * 
 * 
 *        
 * @version 0.1
 * @date 2024-11-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

void check() 
{
    int a {5}, b {6};

    if (a == b) {
        std::cout << "equal" << "\n";
    } else if (a != b) {
        std::cout << "not equal" << "\n";
    }

    if (a > b) {
        //something
    } else if (a < b) {
        //something
    } else {
        //final block, do something.
    }
}

bool compare()
{
    bool match {false};

    int a {1}, b{2};

    if (a == b) {
        match = true;
        return match; //this will exit the function and return the result already
    }

    return match;
}

int main(int argc, char *argv[])
{
    
}
