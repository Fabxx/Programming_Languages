#include <stdio.h>
/*Enumerators are variables where you can store numerical values (ints and hex numbers) for each of them. and can be used for 
	comparisons, and we can also assign these values to int vars if we need. an enumerator is directly accessible unlike a struct.
	(so no enumerators enum object. The only case it is unaccessible is because of scope limits)
 	An enum can't be modified once set, like a const value.
  
  These can be useful when making documentation for specific codes, like ERROR_CODE documentation for example, where you write the number 
  expected for ERROR_SUCCESS, ERROR_FAIL and so on. And will also make comparisons with these values much more understanable than just 
  writing (if a == 707), instead we can write (if a == ERROR_FAIL (aka 707 number))
  */

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
