/**
 * @file main.c
 * @author Fabxx
 * @brief ? and : are equivalend of if conditions, written in a simpler syntax. Can be used in both C/C++
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d", &a);
	
	/*normal if statement

	if (a > 10) {
		b = 20;
	} else {
		b = 1;
	}
	*/

	//ternary operator usage, is a > 10 ? if yes b gets 20, else gets 1:
	b = (a > 10) ? 20 : 1;
	printf("Value of B: %d\n", b);
	return (0);
}