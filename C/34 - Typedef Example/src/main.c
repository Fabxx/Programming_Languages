/**
 * @file main.c
 * @author Fabxx
 * @brief typedef is a keyword that allows you to give custom names to defined types. similar to #define but that's for macros.
 * 	      can be used for ALL types, but be aware that it can get confusing with long portions of code unless the custom types are 
 *        simple and understandable.
 * @version 0.1
 * @date 2023-01-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

typedef struct 
{
	int a;
} a;

typedef int integer;

int main()
{
	/*note, each struct in this case it's a different memory region, like an array of structs aka a[]
	  in this case we are defining a struct custom name "a" for the type.*/
	a s;
	a s1;

	scanf("%d", &s.a);
	printf("%d\n%d\n", s.a, s1.a);

	//calling int with my custom name.
	integer a = 0;

	return (0);
}