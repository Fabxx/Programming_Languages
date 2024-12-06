/*Inline can be used for optimization purposes. Normally what would happen is this:

    void func() {// instructions...}

    int main(){ function() }

    we execute the main stack frame, when main reaches func, it has to make a jump to the other function stack frame, execute it and then 
    jump back to the main stack frame. In big functions this is not a problem, but in really short functions there can be a oberhead in 
    the CPU registers, because it takes more time to jump in and back rather than executing the instructions. 

    So, applying inline removes this need to jump, and puts the assembly code of the function inside the main stack frame.

    Now this is a very simple code, so performance won't be affected that much, but in larger programs this can optimize
    the code a lot if using more small functions.

    Using static to avoid linking error of undefined reference, forces the linker to include the function symbol in the symbol table. 
    Extern keyword can work as well to allow the code generation of the function, but in C context static is more appropriate 
    (unless you really need that function to be extern.)

*/

#include <stdio.h>
#include <stdlib.h>

void func() {
    printf("somthing\n");
}

static inline void printfunc() {
    printf("Something\n");
}

int main(void)
{
    for (size_t i = 0; i < 10; i++) {
        //func();
        printfunc();
    }
    

    return 0;
}
