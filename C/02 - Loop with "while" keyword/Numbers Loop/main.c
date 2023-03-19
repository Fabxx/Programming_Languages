#include <stdio.h>
#include <stdlib.h>

int main() {

      int x = 0, y = 1, z = 0; //variables
 
	
	//NOTE: Can also write while (x < 255) above, no need to do do-while. It's just another way of doing the operation
     do {
            printf("%d\n", x); //result output at end line

             z = x + y; //Z attribute
             x = y;
             y = z;

     }    while (x < 255); //In this case x must be lower than 255

   }
}

//If x > than 255, then the loop will restart.
