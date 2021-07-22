/**
 * @file main.c
 * @author x86_Avx
 * @brief This program shows how to do a comparison between two strings with
 * 		  strcmp function. Be aware that to avoid segmentation faults, the strings
 * 		  MUST be arrays with defined size, or else while checking, the program goes
 * 		  out of it's memory range, resulting in a crash.
 * @version 0.1
 * @date 2021-07-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main()
{
	char string1[SIZE];
	char string2[SIZE];

	fgets(string1, sizeof(string1), stdin);
	fflush(stdin);
	fgets(string2, sizeof(string2), stdin);
	fflush(stdin);

	if (strcmp(string1, string2) == 0)
	{
		puts("The stirngs are the same\n");
	}else
	{
		puts("the stirngs are different\n");
	}
	
	

	return (0);
}