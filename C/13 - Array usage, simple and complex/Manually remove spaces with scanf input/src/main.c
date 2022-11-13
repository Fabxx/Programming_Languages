#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char string1[20];

	scanf("%s", string1);

	for (size_t i = 0; i < 20; i++)
	{
	 if (string1[i] == '_')
	 {
		string1[i] = ' ';

	 }

	}
	
	printf("Stringa: %s\n", string1);
	return 0;
}