#include <stdio.h>
#include <stdlib.h>

int main() {

        int x, y, z; //variables

    
        while (1) {

              x = 0; //assignment of values to variables
     
              y = 1;

     do {
            printf("%d\n", x); //result output at end line

             z = x + y; //Z attribute
             x = y;
             y = z;

     }    while (x < 255); //In this case x must be lower than 255

   }
}

//If sum > of 255, then the loop will restart.
