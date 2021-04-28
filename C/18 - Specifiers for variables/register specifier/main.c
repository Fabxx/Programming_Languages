#include <stdio.h>
#include <stdlib.h>

/*The register specifier for a variable let's us work with the values and data much faster, saving the data stored in some sort of
  registers which lets the program access to the data faster. It is good to use them only if it's a specific request in terms of accuracy
  and speed, here's an example with the for iteration.*/

int main() {

    register int i;

        for (i = 0; i < 10; i++){

            printf("Hello world!\n");
        }

    return 0;
}
