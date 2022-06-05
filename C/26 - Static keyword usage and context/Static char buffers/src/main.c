#include <stdio.h>
/**
 * @brief Showing how to retreive and store data permanently in memory.
 *  	  Can be useful when we don't want to retreive multiple times the same
 * 		  data ina  loop, to save performance. 
 * 
 * 
 */

int main()
{
	static char *buffer = NULL; //if you don't want this to be modified use static const char.

	for (size_t i = 0; i < 10; i++)
	{
		if (buffer == NULL)
		{
			buffer = "Content to avoid if each time.";
		} else 
		{  //will start from number 2.
			printf("Printing buffer obtained in %d: %s\n", i+1, buffer);
		}
	}
	//when this is not needed further in the program execution, we can free it. or else we can leave it
	//allocated until we close the program.
	free(buffer); 
	return (0);
}
