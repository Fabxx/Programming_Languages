/**
 * @file main.cpp
 * @author Fabxx
 * @brief This program prints a string called "hello world!" into the stdout buffer of the console.
 *        
 *        - stdout is a dedicated buffer for output data. A buffer it's a dedicated memory space.
 *        
 *        - <iostream> is the standard C++ library included in the project to use the standard functions.
 *        
 *        - std:: is the namespace of the standard library. Will see more details about it later.
 *        
 *        - endl means end line, the next data that will be printed will go onto the next line.
 *        
 *        - << is the insertion operator, it's used to insert data into the buffer.
 *        
 *        - main.cpp is the main file that contains the primary thread to start the program, aka the "Entry Point".
 * 
 *        - for each source file there is a .o equivalent file when compiled. These are object files that will be 
 *          linked into the executable file. When you update the source files it's good practice to also do a 
 *          cleanup and generate new object files that contain the updates instructions.
 * 
 *        NOTES: 
 *              
 *              1) do NOT use "using namespace std", it does help to not write std:: every time to make the code less verbose,
 *                 however it can cause some conflicts with some variable names that are data types defined in the std namespace.
 * 
 *              2) In the compiler options we can specify the optimization to apply to the assembly output. Optimization is a
 *                 process that changes the produced instruction set for the system architecture so it runs faster.
 * 
 *                 there are 3 optimization levels:
 *                 
 *                  -O0: No optimizations, useful for debug purposes
 *                  
 *                  -O2: Only applies optimizations that can be beneficial for the program, useful for release builds.
 *                  
 *                  -O3: Applies optimizations that may perform better or worse than -O2 flag. Need to compile with both and test
 *                       how it behaves. In these projects you can edit the CXXFLAGS to add the optimization parameter.
 * 
 *              3) If no return value is specified in main, then it will return 0 (or 0x0 which means EXIT_SUCCESS).
 *                 or any specific value that can indicate an error during execution.
 * 
 *              4) Displaying more warnings can be useful to understand the issues. Use these flags when you need them:
 *                  "-Wall",
                    "-Weffc++",
                    "-Wextra",
                    "-Wconversion",
                    "-Wsign-conversion",
                    "-Werror" (this treats warnings as errors and will force you to fix them)

                5) To change the C++ Standard version used by the compiler, use the following flag:

                    "-std=c++xx" where xx is the version number.

                6) std::endl can be slow if we have to do multiple new lines in a row. Because it first moves the cursor to the next line
                    then it flushed the output buffer, which is slow. Instead, we can use '\n'. The conventional way is 
                    to write it in single quotes, but double quotes are fine too. If already inside a string no quotes are needed.
 *                  
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(void)
{
    std::cout << "Hello world!" << std::endl 
              << "going on new line after this\n";

    std::cout << "single line print \n";
    return 0;
}
