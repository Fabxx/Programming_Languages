#include <stdio.h>

int main()
{
	/*we can initialize the array with multiple words instead of single chars with the pointer
	NOTE: this can be done only when declaring the variable. So if you need to reference it in other source
	files and make this a common array, you'll have to declare it as const char **words;
	Then you initialize it in a source file, and reference it in the others once it's been initialized,
	so the compiler will take the initialized values.*/

	const char *words[] = {"Word1", "Word2"};
	printf("%s\n%s", words[0], words[1]);
	return (0);
}