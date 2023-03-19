#include<stdio.h>

/*
functions:
print a succession of squared numbers
through a function.

piersilvio spicoli - uniba informatica
*/

//function declaration
int square(int);  //identifier - type identifier (list-type-formal-parameters);
int sum(int);

int main(){ //main function
	
	
	int number; //la variabile
	
	int square(int xNumber){ return xNumber * xNumber; } //xNumber: is the variable used by the function as a parameter and which returns exactly the value
	int sum(int xRis){ return xRis = xRis + 100; }	//xRis: we assign the value '100' to the variable in order to then increase the value with the iterations 
	
	for(number = 1; number <= 10; number++){
		
		printf("square: %d \n", square(number)); //we use the parameter set inside the iteartion
	}
	
	printf("\n");
	
	for(number = 1; number <= 10; number++){
		
		int x = square(number);	 //assignment
		printf("square: %d \n", sum(x)); //we use the variable, where it contains the square of the iteration parameter
	}	
}
