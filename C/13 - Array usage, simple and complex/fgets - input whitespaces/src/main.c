#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *buffer = (char*)malloc(sizeof(char)*40);
	//you can use fgets to not limit yourself to the first whitespace.
	fgets(buffer, sizeof(buffer), stdin);
	printf("String with space: %s\n", buffer);
	free(buffer);
	return (0);
}