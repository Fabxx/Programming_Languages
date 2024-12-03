/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
            -Literals are explicit values that are put into the code or variables.

            -Literals can have suffixes to specify the data type. Check literal suffixes on the web.

            -Preferr using L uppercase suffix over lowercase l, on some fonts can be confused with 1. (L is long for floating point)

            -Literals can be associated to objects (variables) or directly put into a specific
             memory region.

             -Do NOT use magic numbers. These literals have no meaning. Example:

             const int maxStudentsPerSchool{ numClassrooms * 30 }; 30 is a magical number, it has a value but not a meaning.

             it is preferred to use const expressions, will see later.

 * @version 0.1
 * @date 2024-11-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << "\n"; //string literal, also known as C-Style string.

    double val {0.0}; // 0.0 is a literal value.

    float num {0.0f}; //literal value with its suffix
}
