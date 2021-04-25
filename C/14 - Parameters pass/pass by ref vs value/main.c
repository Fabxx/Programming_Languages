#include <stdio.h>
#include <stdlib.h>

void passByVal(int x);
void passByRef(int *x);

void passByVal(int x) {
    x = 33;
    printf("Value of x from passByVal: %d\n", x);
}

// adding the ampersand in front of the variable makes it pass by reference
// pass by reference essentially means passing the actual variable rather
// than just the VALUE of the variable. 
void passByRef(int *x) {
    *x = 33;
    printf("Value of x from passByRef: %d\n", *x);
}

int main() {
    int x = 10;
    printf("Value of x from main: %d\n", x);

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
