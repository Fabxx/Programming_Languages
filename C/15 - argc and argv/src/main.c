/*
    argc: argument counter, counts the arguments written in the terminal.
    1 is the name of the program, 2 is the first argument, and so on.

    argv: argument vector, the strings used to represent the arguments, to trigget their behavior.

    in this case we can run the program as ./main --help

    argc must be bigger than 0, or else you will try to compare a unallocated string position, which causes
    a segfault because the vector is empty.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (argc > 1) {
         if (strcmp(argv[1], "--help") == 0) {
            printf("Displaying help:\n"
               "1) test\n"
               "2) something");
        }

    }

    return 0;
}
