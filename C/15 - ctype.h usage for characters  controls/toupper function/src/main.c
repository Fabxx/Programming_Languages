/**
 * @file main.c
 * @author Sqrdelta
 * @brief This simple program shows how to convert a lowercase string into a
 * 	      uppercase string.
 * @version 0.1
 * @date 2021-06-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 10

void toupperfunc(char string[]);

int main () {

	char string[SIZE];

	fgets(string, sizeof(string), stdin);
	fflush(stdin);
	toupperfunc(string);

	printf("Uppercase stirng: %s\n", string);
   
   return EXIT_SUCCESS;
}

void toupperfunc(char string[]) {

	for (size_t i = 0; i < SIZE; i++)
	{
		string[i] = toupper(string[i]);	
	}

}