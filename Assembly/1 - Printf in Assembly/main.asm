#include <stdio.h>
#include <stdlib.h>

/*Simple sum in ASM assembly.*/

int main()
{
        int foo = 10, bar = 15; //variables.

    asm volatile("addl  %%ebx,%%eax" //function in assembler to sum.

                             :"=a"(foo) //we assign to a the foo value, to b the bar value.

                             :"a"(foo), "b"(bar)

                             ); //end of ASM.

        printf("foo + bar = %d\n", foo); //we print the final value of foo.
        return 0;
}
