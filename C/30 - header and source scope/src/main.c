#include <stdio.h>
#include "vars.h"

array     //type is not recognized globally from the .h because in this way we're trying to create a new variable with the same name.
	  //Instead, if a variable from .h is called in a funciton, the compiler will see the variable in the .h and not a new instance.

int main()
{
	array; //type is recognized
	a;
	printf("Hello World!\n");

	return (0);
}
