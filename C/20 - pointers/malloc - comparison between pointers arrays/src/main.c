/**
 * @file main.c
 * @author x86_Avx
 * @brief This program shows how to do a comparison between two pointer strings
 * 		  using pointer function.
 * @version 0.1
 * @date 2021-07-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inputstr();

int main()
{

	char stringptr1, stringptr2;
	
	input(&stringptr1, &stringptr2);

	if (strcmp(&stringptr1, &stringptr2) == 0) {
		puts("The strings are the same\n");
	} else {
		puts("the strings are different\n");
	}
	return (0);
}

char *inputstr(char *str, char *str2) { 
   
    //the malloc function allocates for one position n bytes of chars, depending how many we insert.
    str = (char *) malloc(sizeof(char));
    str2 = (char *) malloc(sizeof(char));
   
    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);
    
    fflush(stdin);
    free(str); //here we remove the mem allocation given.
    free(str2);
}

