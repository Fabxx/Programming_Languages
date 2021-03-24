#include<stdio.h>

/*
Use of the conditional if - else - example:
this example will cover a classic exercise that calculates if a number
either even or odd. To do this we will use the if condition (in case the condition is true),
else (in case the statement is different by having a code block executed)

the logic is this:
se (colorDog == "brown spotted") if ()
then it's true (true)
otherwise else ()
the color of the dog is not brown in spots

let's get into the exercise

Piersilvio Spicoli - uniba informatica
*/

int main(){
	
	int number; //variable NOTE: must be of type int!
	
	printf("Example n^5 \n");
	printf("insert a number\n: "); //input
	scanf("%f", &number);
	
	if(number%2 == 0){    
	
	/*
	'number% 2' is an operation that allows us to calculate the remainder of the division.
	If we divide the number / 2, and the remainder equals zero, the number will be even.
	If instead the division has the remainder, then that number will be odd
	
	NOTE: the% operator is called module, and allows us to calculate the remainder of a division of any data type (int)
	
	*/
		
		printf("The numbers is even.\n");
	}else{
		
		printf("The number is odd.\n");
	}
}
