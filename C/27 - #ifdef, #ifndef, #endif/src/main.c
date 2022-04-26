#include <stdio.h>
#define C

/*preprocessors can define conditions to verify at compilation time rather than runtime, so in this case we can choose if the compiler
 has to include one library or another by verifying the condition while compiling, this can save some performance at runtime 
 since we don't verify the condition while executing the program with a basic if ().*/


int main(int argc, char const *argv[])
{
    //equivalent of if defined
    #ifndef C 
            static int a = 1; //this will be setted at compile time.
    #elif not defined D   
            a = 0;
    #else
            a = 10;
    #endif

        printf("The compiler setted the value at: %d\n", a);

    return 0;
}
