#include<stdio.h>
/*
algebraic operators:
in this example we create a simple condition
which allows us to understand if the age we enter
can tell if we are of age or not

we will use only one, considering that the reader knows
minimally the operators (<,>, =, <=, =>)

spicoli piersilvio - uniba informatica
*/

int main(){
	
	int age;
	
	printf("How old are u?\n");
	scanf("%d", &age);
	
	if(age < 18){
		
		printf("you are a minor!");
	}else{
		printf("you are of age!");
	}
}
