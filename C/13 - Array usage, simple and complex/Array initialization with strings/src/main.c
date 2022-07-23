#include <stdio.h>

int main()
{
	/*we can initialize the array with multiple words instead of single chars with the pointer
	NOTE: this can be done only when declaring the variable.*/

	const char *words[] = {"Word1", "Word2"};
	printf("%s\n%s", words[0], words[1]);
	return (0);
}
