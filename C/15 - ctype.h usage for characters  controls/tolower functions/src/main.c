/**
 * @file main.c
 * @author Sqrdelta
 * @brief This little program shows how to convert an uppercase string into a 
 *        lowercase stirng.
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

void tolowerfunc(char string[]);


int main()
{
	char string[SIZE];

	fgets(string, sizeof(string), stdin);

	tolowerfunc(string);

	printf("New lowered string: %s\n", string);

	return (0);
}


void tolowerfunc(char string[]) {

	for (size_t i = 0; i < SIZE; i++)
	{
		string[i] = tolower(string[i]);
	
	}
}