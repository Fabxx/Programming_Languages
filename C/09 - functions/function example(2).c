#include<stdio.h>

/*
functions:
program that identifies the maximum between two numbers
passing two arguments and passing the maximum value as the return value

piersilvio spicoli - uniba informatica
*/

//function declaration
int max(int, int);

int main(){ //main function
	
	int x;
	int y;
	
	int max(int a, int b){ 
	
		if(a >= b){ 
		
			return a; 
		}else{ 
			return b; 
		} 
	}
	
	printf("insert the first number: \n");
	scanf("%d", &x);

	printf("insert the second number: \n");
	scanf("%d", &y);
	
	printf("\n");
	
	printf("max number: %d", max(x, y));	
}
