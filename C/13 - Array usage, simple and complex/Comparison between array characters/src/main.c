/**
 * @file main.c
 * @author x86_Avx
 * @brief This program shows how to do a comparison between two strings with
 * 		  strcmp function. Be aware that to avoid segmentation faults, the strings either must have a defined constant size, or 
 		  you can pass the strings as parameters to have dynamic allocation without pointers and malloc funciton. 
 * @version 0.1
 * @date 2021-07-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inputstr(char string[]);

int main()
{
	char string1 = inputstr(string1);
	char string2 = inputstr(string2);
	
	if (strcmp(string1, string2) == 0)
	{
		puts("The strings are the same\n");
	}else
	{
		puts("the strings are different\n");
	}
	
	//An alternative comparison can be made without string.h, if you save the content of both strings in a char variable, and comapre them directly.


	return (0);
}

char inputstr(char string[]) { 
 
    fgets(string, sizeof(string), stdin);
    fflush(stdin);
    return inputstr(string);

}
