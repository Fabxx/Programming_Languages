/*Copyright DaraWoo - Programming Languages*/

#include <stdio.h>
#include <stdlib.h>

void passByVal(int x);
void passByRef(int *x);

void passByVal(int x) {
    x = 33;
    printf("Value of x from passByVal: %d\n", x);
}

/* adding the ampersand in front of the variable makes it pass by reference
** here we are passint the memory address of x ad a parameter*/
void passByRef(int *x) {
    *x = 33;
    printf("Value of x from passByRef: %d\n", *x);
}

int main() {
    int x = 10;
    printf("Value of x from main: %d\n", x);

    /*Without the & symbol, we won't make x a pointer and get the memory address of the previous X.
    THe & symbol makes a variable a pointer, and we make it reference the old memory address of X, which was 
    Filled in the above function. And as you can see below, we get the data from the previous memory address.
    If we don't do these with pointers, we are COPYING the memory areas, resulting in redundant bytes in memory.*/
    passByVal(x);
    // will still be 10
    printf("Value of x, after passByVal: %d\n", x);

    passByRef(&x);
    // will now be 33
    printf("Value of x, after passByRef: %d\n", x);

    return 0;
}

// SUMMARY:
// when you pass by ref, you can modify the original value.
// when you pass by value, you only can read the original value.

//The pointer variables are useful if you want to pass the actual variabile in another by taking his address, which contains it's value. So you can replace values when you need it
//of a variabile in the main for example or elsewhere.
