#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <time.h>

int main(int a, int b) {

    / * Using the passed parameters, we carry out the operations. Note, even though a and b were declared in the other source's ints, there are no conflicts
       with other source files. The program randomizes values, with the randomized values we carry out the operations given as an example to the various functions
       of the other source. This is what the other c file contains, examples to be applied on the parameters that we will pass on the round brackets, nothing more * /

    srand(time(NULL));

     a = rand() % 10 + 1;
     b = rand() % 10 + 1;

    / * Once the values have been randomized, we work on them, using the functions with the necessary operation * /

    int c = power(a);

    int d = c * b;


    int e = cube(b);

    int tot = a + e;

    printf("%d\n", tot);

    verify(tot);


    return 0;
}

