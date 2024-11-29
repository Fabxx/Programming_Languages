/**
 * @file main.cpp
 * @author Fabxx
 * @brief An example of user defined function. The syntax defines:
 * 
 *          -Return type of a function
 *          -Function name (header)
 *          -Parameter list (if provided)
 *          -Function body
 * 
 *          Functions can be called inside other functions.
 *             
 *           main() is the entry point of the program and is needed to start the execution of the application.
 * 
 *          default return values for main can be:
 * 
 *          -0
 *          -EXIT_SUCCESS (aka 0)
 *          -EXIT_FAILURE (aka 1)
 * 
 *          you can initialize variables with values returned by a function.
 * 
 *      NOTES: 
 * 
 *              1) Nested functions are not supported.
 *              
 *              2) Any function that isn't "void" must return something.
 * 
 *              3) It is possible to apply expressions on function return values as well.

 * @version 0.1
 * @date 2024-09-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int num1() 
{
    return 2;
}

int num2()
{
    return 3;
}

//Does not return anything.
void anotherFunction() 
{
    std::cout << num1() << '\n'; //will print 2.
}

std::string myFunction2()
{
    std::string example{"some string"};

    return example; // can also return variables.
}

int main(void)
{
    anotherFunction();
    std::cout << myFunction2() << '\n';

    std::string myString{myFunction2()}; //variable init through function
    
    std::cout << myString << '\n';

    std::cout << num1() + num2() << '\n'; //expression on return values.
    return 0;
}
