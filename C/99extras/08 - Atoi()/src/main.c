/**
 * @file main.c
 * @author Fabxx
 * @brief Atoi converts string numbers into actual numbers.
	  NOTE: For doubles use "atof".
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *string = "1024";
	int num = atoi(string);
	
	printf("number: %d\n", num);
	return (0);
}
