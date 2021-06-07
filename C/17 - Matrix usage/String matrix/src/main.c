/**
 * @file main.c
 * @author Sqrdelta -  https://github.com/Sqrdelta/Programming_Languages
 * @brief This program shows how to use matrixes with strings, we indicate that the matrix
 * 	  can contain 10 strings for a total of 15 lenght, each column it's a space of a single 
 * 	  character for each word we type in. We remove the \n because it might cause skips or segmentation faults
 * 	  depending on what you're gonna do, then we proceed to print them. We clear the buffer after we
 *        inserted a string, because in case we insert a longer stirn gthan the LENGHT, we will have leftovers
 *        in the input buffer, and thosee will go into the next i position, causing bugs or even worse, makes
 *        skip the whole function and will print out empty strings.
 * @version 0.1
 * @date 2021-06-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGS 10
#define LENGHT 15

int clear_endline(char string[]) {

	int result = 0;

	char *ptr = strstr(string, "\n");
	if (ptr != NULL)
	{
		*ptr = 0;
	} else
	{
		result = 1;
	}
	
	return result;

}

int main () {

	char matrix[STRINGS][LENGHT];

	int i, j;

	printf("Insert %d strings, leave blank to exit\n", STRINGS);

	for (i = 0; i < STRINGS; i++)
	{
		//initializing matrix value to empty to avoid issues with the buffer.
		strcpy(matrix[i], "");
		fgets(matrix[i], LENGHT, stdin);
		clear_endline(matrix[i]);
		fflush(stdin); //this is used to clean the buffer input, if we put a string bigger than 15 
					   //those won't be stored in the next i position, we will have a clean string.

		if(strcmp(matrix[i], "\n") == 0) {
			i = STRINGS;
		}
	}
	for (j = 0; j < STRINGS; j++)
	{
		printf("string: %s\n", matrix[j]);
	}

   return EXIT_SUCCESS;
}
