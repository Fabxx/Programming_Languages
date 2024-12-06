/* 

Two ways to obtain a string:

    1) using fgets, requires fixed size buffers, i.e you need to know how much to expect.
       and then removing \n delimiter with strcspn.
       
    2) using scanf in two ways:
     
         -with "%[^\n]%*c" with fixed size arrays
         -with "%m[^\n]%*c" with undefined size arrays or pointers.

         ^\n tells to take input until newline doesn’t get encountered. 
         
         with %*c, it reads newline character and * discads it.

         m tells to scanf to calculate the received buffer size, and give it to the pointer.
         
         NOTE: this is POSIX standard and requires glibc 2.7 or higher and works on linux and *nix systems.
         SO if you work on windows, you better use fixed size arrays with a safe size if you expect large buffers.

    3) For numbers simpply use scanf("%d", &var);
       
     NOTES:
        -Empty string init must have double quotes with a space. You are not forced to initialized a string, but it's a good practice
            to avoid garbage data. You can notice that while inspectioning the vars in a debugger.
        
        -fgets() reads n-1 chars as second argument. So if we have something like this:

        char numbers[2][2];

        in this array we can store 2 chars in two positions, if we write 10 as a number:
            -fgets reads only 1 and \n takes priority to the last position. 
            -0 doesn't fit and goes in the next position. So if you have to write N digits, make sure
                to allocate N+1 (or more just to be sure, but not too much or you waste memory) size to the array, if using fixed-size ones.

            -do NOT use 1 as a size for 1 digit, or else fgets gets skipped, because it reads n-1 chars, and guess what
                1-1 = 0! The more you know.


        -To properly read a string give to fgets the sizeof(variable) to read.
        
        https://en.cppreference.com/w/c/io/fgets 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {   


   char str[20];
   scanf("%[^\n]%*c", str);
   printf("%s\n", str);

   char *str2 = NULL;

    scanf("%m[^\n]%*c", &str2);
    printf("%s\n", str2);
    free(str2);

    //example with unfixed size array with fixed positions.
    
    char *strings[2];

    for (size_t i = 0; i < 2; i++) {
        scanf("%m[^\n]%*c", &strings[i]);
        printf("%s\n", strings[i]);
    }

    int number[1];
    scanf("%d", &number[0]);
    printf("%d\n", number[0]);
    
    return 0;
}