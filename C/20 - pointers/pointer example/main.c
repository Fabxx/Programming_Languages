#include "functions.h"

int main(void) {

    //our variable in the main

    int x = 10;

    printf("Current MAIN X value:%d\n", x);

    //we call the function, and with the address operator "&" we transfer the result in the function memory address to the x memory address
    //basically x will take the value of the variable in the function we passed as a parameter. So we're saying
    //call the function where we passed z, and in our current x, pass the memory address of it. a pointer it's basically a
    //memory address container.

    pointer(&x);

    if (x != 10) {

        puts("Value modified!\n");
        printf("Current MAIN X value:%d\n", x);
    }


    return 0;
}
