#include <stdio.h>
#include <stdbool.h>

/*If we have to switch a pointer, we have to make the assignation to the whole pointer and negate the var with
 the symbol *.*/

void execution_status(bool *execute)
{
	*execute = false;
	*execute = !*execute;
}


int main()
{
	bool execution = false;
	execution_status(&execution);
	if (execution)
	{
		printf("Boolean changed!\n");
	}

	return (0);
}