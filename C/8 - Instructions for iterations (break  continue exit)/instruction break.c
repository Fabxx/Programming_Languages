#include<stdio.h>

/*
the break statement:
breaks iterations of a loop structure (for, while) ahead of time and comes
used to force the cycle to exit.
It is usually always associated with an 'if' condition

obviously it is not only used inside the loops, as when it comes into execution
puts the program, ie the exe file, on hold

piersilvio spicoli - uniba informatic department.
*/

int main(){
	/*
	we print a succession of symbols (@, #) from 1 to 10
	using two loops:
	- while
	- do-while
	*/
	int variableCount = 1;
	
	while(variableCount <= 10){
		
		printf("# ");
		
		if(variableCount == 5){ break; } //if we are in the fifth iteration, then it stops the loop		
		
		variableCount++; //increasement.
	}
	/*
		exiting the while loop with break, the variableCount stops at the value of 5.
		using the do-while we end the sequence with a reverse symbol reaching 9, understanding that we started from 1. 
	*/
	do{
		
		printf(" @");
		
		if(variableCount == 9){ break; } //comparison, if it's true it exits the cicle.	
		
		variableCount++;
		
	}while(variableCount >= 5);
}
