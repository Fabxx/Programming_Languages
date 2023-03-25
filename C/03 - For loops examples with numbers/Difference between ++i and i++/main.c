#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*Pre-increment: ++i will increment the value of i, and then return the incremented value, useful if we need to do comparisons on the actual modified value.

      Post-increment: i++ will increment the value of i, but return the original value that i held before being incremented. useful to do comparison on the value
          before modification. 
          
          What changes specificly, is the increment operator priority over the return value.

          It is preferred to use ++i if we don't need the returned value before modification to optimize a bit the code.
          */
    for (size_t i = 0; i < 5; ++i) {
        if (i == 3) {
            printf("index incremented: %ld\n", i);
        }
    }

    for (size_t i = 0; i < 5; i++) {
        if (i == 3) {
            printf("Index returned before increase: %ld\n", i);
        }
    } 

    return 0;
}