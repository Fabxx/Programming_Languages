
/*Here we include our custom library with the functions that we made in the .c file.*/

#include <stdio.h>
#include <stdlib.h>
#include "operands.h"

int main() {

    int i;

        for ( i = 0; i < 3; i++) {

            sum();
            sub();
    }

    return 0;
}
