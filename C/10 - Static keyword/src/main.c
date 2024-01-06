/*
    Static keyword can have different behaviors based on what it is used.

    -A static variable keeps its value in memory, even if it's local into a function. 
      if global, its scope is limited to the file where it was declared.
      Useful to change the state of values between functions when needed.

    -A static function can only be called in the file where it was created. Can also be used in 
     header files, but be sure to make them "static inline" to avoid multiple definitions of the 
     same symbol, which cause linking errors. We'll talk about inline keyword later.

     -Static can be used in a array size when an array is being used as argument. IN this way we tell to the 
      compiler that we don't expect a null pointer as an argument. The keyword will make the function expect
      an array of at least N size, or else it won't be accepted.

      A static variable can be useful if we are looping a code and don't want to repeat the function as a whole, but only a 
      specific part of it for example.
*/

#include <stdio.h>
#include <stdlib.h>

#include "header.h"

static void func() {
   static int a = 0;
    printf("Value of a after function destruction: %d\n", a);
    a++;
}

void array(int myarray[static 2]) {

    for (size_t i = 0; i < 2; i++) {
        printf("%d\n", myarray[i]);
    }
    
}

void function() {
    printf("Printing only if buffer is not null\n");
}

int main()
{
    static char *buffer = NULL;

    char *mystring = "this inits a buffer";

    for (size_t i = 0; i < 5; i++) {
        if (buffer == NULL) {
            buffer = mystring;
        } else {
            function();
        }
    }

    for (size_t i = 0; i < 10; i++) {
        func();
    }

    //size cannot be lower than 2
    int arr[2] = {10, 20};

    array(arr);

    headerfunc();    
    return 0;
}
