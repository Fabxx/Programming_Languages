#include <stdio.h>
/*Enumerators are variables where you can store numerical values for each of them. and can be used for 
	comparison or be re-assigned an enumerator is directly accessible unlike a struct.
	An enum can't be modified once setted.*/

enum enumerators
{
	RED = 1,
	BLUE = 2,
	GREEN = 3,
	ALPHA = 4
} enumerators;

int main()
{
	int a;
	scanf("%d", &a);

	if (a == RED)
	{
		printf("A is equal to RED, which is: %d\n", RED);
	} else 
	{
		printf("Printing ALPHA: %d\n", ALPHA);
	}

	return 0;
}