#include <stdio.h>


//Exiting loop with break keyword, equivalent of i = max value to exit.
int main()
{
	__int16_t a = 0;

	for (size_t i = 0; i < 5; i++)
	{
		if (a > 5)
		{
			break;
		}
		else 
		{
			printf("A value: %d\n", a);
			a++;
		}
	}

	printf("For stopped with break!\n");

	a = 0;
	
	//exiting loop by setting i to max value for comparison.
	for (size_t i = 0; i < 5; i++)
	{
		if (a > 5)
		{
			i = 5;
		}
		else 
		{
			printf("A value: %d\n", a);
			a++;
		}
	}

	printf("For stopped with i value set!!\n");
	return (0);
}