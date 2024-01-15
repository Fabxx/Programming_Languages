#include <stdio.h>

//using the parenthesis

int main()
{
	int a = 10;
	char b = (char)a; //assigning to b a char equivalent of a value

	printf("%c\n", &b); 
	printf("%d\n", a);
	return (0);
}