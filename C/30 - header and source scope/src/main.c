#include <stdio.h>
#include "vars.h"

array //type is not recognized globally. Means that you'll have to create a totally new instance of the variable if it
	  //has to be global. Instead, if a variable from .h is called in a funciton with a memory range in it's source,
	  //the compiler can recognize it's type. Each global declaration has to be unique to avoid conflicts.

int main()
{
	array; //type is recognized
	a;
	printf("Hello World!\n");

	return (0);
}