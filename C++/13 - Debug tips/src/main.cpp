/**
 * @file main.cpp
 * @author Fabxx
 * @brief DIfferent ways to debug:
 * 
 *        -Running code with a debugger and setting breakpoints into specific parts of the code.
 *          Also allows to go through the code step by step.
 * 
 *        -Commenting functions to not use them and see how the program behaves
 * 
 *        -Using std::cout as a manual logging system on produced data
 * 
 *        -Putting code under preprocessor conditions
 * 
 *        -Using an actual logger (PLOG is one of them available on github)
 * 
 * 
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

#define DEBUG_FLAG //comment to disable debugging

int main(int argc, char *argv[])
{
    #ifdef DEBUG_FLAG
        std::cout << "printing something to log\n";
    #endif
}
