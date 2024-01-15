/*
  Extern keyword allows to increase the scope of a function/variable for external linkage in the compiler.

  in a C++ context, it is used for hybrid programming to allow compilation of .c files with C symbols, along with .cpp files with 
  C++ symbols with the following snippet:

  #ifdef __cplusplus
  extern "C" {

  }

  #endif

  then you can call C functions in .c files.

  For variables it doesn't instantiate the variable itself, i.e. doesn't allocate any memory. This needs to be done somewhere else. 
  Thus it's important if you want to import the variable from somewhere else.

  For functions, this only tells the compiler that linkage is extern. As this is the default you don't need to explicitly do it.

  in this example, int myvar is declared in the header, and defined in file.c, by including the header, we can then call the same
  definition from file.c, without redefining myvar.

  Basically the compiler finds the declaration, finds our definition to allocate memory and then allows further references without
  redefining the same variable.

    It is useful if we need to access the same var in different files.
*/

#include <stdio.h>
#include "header.h"

int main(void)
{
    printf("%d\n", myvar);

    printf("extern strings: %s\t%s\t%s\n", strings[0], strings[1], strings[2]);

    return 0;
}
