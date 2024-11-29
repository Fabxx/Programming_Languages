/**
 * @file main.cpp
 * @author Fabxx
 * @brief SHowing an example of collisions. in short:
 * 
 *        -We have two equal functions in both a and main
 *        -The compiler compiles the source files individually
 *        -We can't link them together because they have the same name
 * 
 *      Solution: 
 * 
 *         -Namespaces: allows to create dedicated scope regions for our data to avoid collisions and fix linking errors.
 *                      makes it easier to understand to which context that data belongs to.
 * 
 *          -To avoid writing the name of your namespace you can use "using namespace yourNamespace;"
 *           not recommended though it can cause ambiguity and makes namespaces utility useless.
 * 
 * 
 *      NOTES:
 *              -Anything global is considered to be in a "global namespace"
 * 
 * 
 * @version 0.1
 * @date 2024-10-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace dedicated;

namespace dedicated {
    void myFcn(int x)
    {
        std::cout << x;
    }

};


int main(int argc, char *argv[])
{
    dedicated::myFcn(4);

    myFcn(7); //does not require to write the name of the namespace.
}
