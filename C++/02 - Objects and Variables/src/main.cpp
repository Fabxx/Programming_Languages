/**
 * @file main.cpp
 * @author Fabxx
 * @brief Let's put it simple:
 * 
 *                  - An object it's used to indirectly access memory locations
 *                  
 *                  - An object is a memory region that can contain data, a block of memory.
 *                    A variable is a object that has a name, aka identifier.
 *                  
 *                  - in C++ The term object does not referr to functions.
 *                  
 *                  - Variable definitions can be separate or in the same line if they are of the same type.
 * 
 * 
 *                  Different types of initialization:
 * 
                    int b = 5;     // copy-initialization (initial value after equals sign)
                    int c ( 6 );   // direct-initialization (initial value in parenthesis)

                    // Modern initialization forms (preferred):
                    int d { 7 };   // direct-list initialization (initial value in braces)
                    int f {};      // value-initialization (empty braces)


                    Main advantage of modern initialization with braces is that the compiler does an analysis of whether that variable
                    can safely hold the value. If not it will generate a error. It also avoids narrow conversion of a value to a different type.


                    The [[maybe_unused]] attribute allows us to have unused variables in some cases that might be used later, and the compiler won't complain
                    about them.
 * 
 *              NOTES: 
 * 
 *                  1) C++ does discourage direct memory access like C does, however you are still allowed to do so when 
 *                     necessary, by using pointers.
 * 
 *                  2) It is recommended to not define variables on the same line in most cases for documentation purposes.
 *                     if you don't need to specifically comment the behavior/usage of a variable you can do declarations
 *                     on the same line.
 * 
 *                  3) an object does NOT only represent a memory region of a class, but ANY memory region of what we use. It's a more
 *                     generic meaning.
 * 
 *                  4) A uninitialized variable can lead to undefined behavior. Specifiaclly it can be initialized to any random value found in memory.
 *                     
 *                      If you don't have a specific value to assign to a variable you can do the following:
 *          
 *                      TRADITIONAL WAY:
 *                      - in case of pointers it's good practice to initialize to "null"
 *                      - in case of numerical variables it's good practice to initialize to: 0 for integers, 0.0 for floats/doubles
 *                      - in case of string variables it's good practice to initialize to an empty string aka ""
 *                      - in case of boolean variables it's good practice to initialize to false
 *                      - in case of char variables it's good practice to initialize to ''
 *                      - in case of enum variables it's good practice to initialize to the first enum value
 *                      - in case of arrays it's good practice to initialize all elements to 0 with = {} or memset.
 * 
 *                      MODERN WAY:
 * 
 *                      Any data type can use the initializer {}
 * @version 0.1
 * @date 2024-09-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(void)
{
    int x = 0; //a variable x that is initialized to 0.

    int a = 0, b; //multiple vars on same line, a is initialized, b is not. You can initialize b as well.


    int y {5}; //modern initialization. {} is the initializer.

    [[maybe_unused]] int z {4}; //compiler won't give warning about unused variable.

    std::cout << "Value is: " << x << std::endl;
}
