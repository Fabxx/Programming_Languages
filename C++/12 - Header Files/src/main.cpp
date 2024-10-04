/**
 * @file main.cpp
 * @author Fabxx
 * @brief Header files are used to include foward declarations into source files.
 *        An example is iostream, when included it fowards the cout function of the 
 *        std namespace.
 * 
 *        When you #include a file, the content of the included file is inserted at the point of inclusion. 
 *        This provides a useful way to pull in declarations from another file.
 * 
 *        Including a header file in multiple sources/headers which contains a function declaration/definition
 *        results in the one time definition rule violation. To fix this we use header guards. 
 *        See anotherHeader.h.
 * 
 *       NOTES:
 * 
 *              -When you include a library, if it's a local header file use the "" double quotes
 *               if it's a system library, use the <> angled brackets.

                -Legacy C libraries have the .h extension for the C++ libraries. If using C++ avoid
                 adding the extension in the include of system libraries.

                -Each header file should have a specific job, and be as independent as possible

                -Prefer putting documentation on what something does or how to use it in the header. 
                 It’s more likely to be seen there. Documentation describing how something works 
                 should remain in the source files.
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include "anotherHeader.h"
#include "myHeader.h"

int main(int argc, char *argv[])
{
    std::cout << declaredFunc() << std::endl;

    myFunction();
}
