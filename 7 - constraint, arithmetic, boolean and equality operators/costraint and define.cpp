#include<stdio.h>
/*
constants:
there are two ways to define constants:
 - with the directive to the compiler with #define (#define <identifier> <value>)
 - with the const modifier (const <type> <identifier> = <value>)
the #define directive is an instruction that allows us to speed up execution times
by the compiler and decreases the memory occupation. The usage is very generic and sometimes different from the definition of constant.


 piersilvio spicoli - uniba informatica
*/

//uses of define
#define valMax 50

int main(){
	
	int variable; 
	variable = valMax;  //having a generic constant, we assign the value of the directive to a variable
	
	printf("Variable containing the define directive: %d", variable);
	printf("\n");
	
	const float pi_number = 3.14159;
	variable = pi_number;
	
	printf("Variable containing the value of the const (assignment) modifier: %f", variable); //by entering this instruction, 
	printf("\n");
	//we will have a null value, because 'const' does not allow us to assign its value to different variables
	
	printf("Variable containing the value of the const modifier: %f", pi_number);
}
