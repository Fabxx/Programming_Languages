#include <stdio.h>
#include <stdlib.h>

/*NOTE: 16_T Indicates that we have an array of integer, that gets values of 16 bit lenght precision
 in the scanf we use %hd because we have to retreive a 16 bit value on the array
 on the printf we simply print the value contained in the size_t index i*/

int main()
{
	__int16_t *values = (__int16_t*)malloc(sizeof(__int16_t));

	for (size_t i = 0; i < 5; i++)
	{
		scanf("%hd", &values[i]);
	}

	for (size_t i = 0; i < 5; i++)
	{
		printf("Values with first malloc: %d\n", values[i]);
	}
	


	free(values);
	

	return (0);
}