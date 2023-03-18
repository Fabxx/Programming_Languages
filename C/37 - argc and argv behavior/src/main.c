/**
 * @file main.c
 * @author Fabxx
 * @brief Argc is the argument counter, it increases when from terminal we try to execute the program with more arguments on it
 *        Argv is the argument vector, that takes our arguments as strings
 * 
 *        Argc 0 referres to the program name (in sosme systems can be 1)
 * 
 *        the other argcs referr to the strings we give to the program in terminal before executing.
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc <= 1) {
        printf("No arguments were used, type -h for help\n");
    } else if (argc > 1) {
        if (strcmp(argv[1], "-h") == 0) {
            printf("Usage: example of argument print");
        }
    }

    return 0;
}
