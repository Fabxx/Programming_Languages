#include<stdio.h>

/*
void types:
this type of function produces no parameterized results,
it can be considered an 'empty' function since it is used
for most cases to print etc.
It can be used in both cases, either by using parameter passing
either to print or perform tasks only stated within it.

piersilvio spicoli - uniba informatica
*/

//ddefinition of void
void square(int a) { 
	
	printf("%d", a*a); //in this case we pass a parameter

} 

void printMsg() { 
	
	printf("Hello World! I'm here!"); //in this instead we simply print a message

} 

int main() {
	
	int x = 5;
	square(x);
	
	printf("\n");
	
	printMsg();
	
}
