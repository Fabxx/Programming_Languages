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

	char *stringptr1 = inputstr();
	char *stringptr2 = inputstr();

	if (strcmp(stringptr1, stringptr2) == 0) {
		puts("The strings are the same\n");
	} else {
		puts("the strings are different\n");
	}
	return (0);
}

char *inputstr() { //the pointer on the function lets you return the string memory address as a value, so you can
                   //use the string on other functions. in this case is char.

    char *string;

    string = (char *) malloc(sizeof(char));
    //here the mem allocation will be multiplied for each char inserted by the user.

    fgets(string, sizeof(string), stdin);
    
    fflush(stdin);
    return string;
    free(string); //here we remove the mem allocation to make memory space.
}

