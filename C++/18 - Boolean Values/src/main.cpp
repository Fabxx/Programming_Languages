/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *      
 *          Boolean values can store two types of values:
 * 
 *          -true
 *          
 *          -false
 * 
 *          We can negate a condition with the NOT ! logical operator.
 * 
 *          booleans can be used as conditions to verify if something happened or not.
 * 
 * 
 *          NOTES:
 * 
 *              -Empty initialization of a bool type defaults to false
 * 
 *              -To print/insert "true" or "false"  you can use std::boolalpha with cin/cout.
 *               however will only allow lower-cased false or true to be accepted. not even 0/1.
 * 
 *              -std::cin only accepts numbers as input for boolean types.
 			   
 		
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

bool isEqualTo(int *x, int *y)
{
    bool match {false};

    if (x == y) {
        match = true;
    } 

    return match;
}

int main(int argc, char *argv[])
{
    bool a {true};

    bool b {false};

    bool c {!true}; //will be false because true is negated. 

    bool an {0}; //allowed, is false

    bool bn {1}; //allowed, is true

    bool cn {2}; // error

    std::cout << a << "\n";

    std::cout << std::boolalpha << "\n"; //enables print of true/false instead of 0/1

    std::cout << b << "\n" << c << "\n";

     std::cout << std::noboolalpha << "\n"; //restored 1/0 print


     int n1 {5}, n2 {6};

     if (isEqualTo(&n1, &n2)) {
        std::cout << "equal" << "\n";
     } else {
        std::cout << "not equal" << "\n";
     }

    
}
