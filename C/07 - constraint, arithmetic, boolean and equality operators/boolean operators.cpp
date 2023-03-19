#include<stdio.h>
/*
boolean operators:
the definition of a boolean operator is based on two fundamental values:
 - true
 - false
They are operators that allow us to carry out various operations, especially in conditions
or in loops, to check if certain instructions can be believed to be true or false.
here are the three types:
 - AND -> &&
   to return true, the conditions that must be checked must be both
   equal
    A B ris
F F F
F T F
T F F
T T T
- OR -> ||
  if in one of the conditions at least one is true, the result will be true, otherwise it will be false in the case
  where both are false
    A B ris
F F F
F T T
T F T
T T T
- NOT ->!
  if the former is true, then it will be false. The other way around
  A ris A ris
  T F F T

the identifier for boolean variables is bool

piersilvio spicoli - uniba informatica
*/

int main(){
	
	// examples for each operator with variables, then we'll use the operators inside the conditions j
	// Suppose I'm hungry, but I don't have to eat
	bool Hunger = true;
	bool forcedToeat = false;
	bool risAND = Hunger && forcedToeat;
	
	printf("ris AND: %s", risAND?"true":"false"); //the print format of the bool variables
	printf("\n");
	
	bool risOR = Hunger || forcedToeat;
	
	printf("ris OR: %s", risOR?"true":"false");
	printf("\n");
	
	bool risNOT = !Hunger;
	printf("ris NOT: %s", risNOT?"true":"false");
	printf("\n");
	
	//examples on condition
	 //writing if (Hunger && forcedToeat) or if (!Hunger && !forcedToeat) is equivalend of putting the ==/!= false/true
	if(Hunger == true && forcedToeat == false){
		printf("I'm hungry, but I don't have to eat: %s", risAND?"true":"false");
		printf("\n");
	}
	
	if(Hunger == true || forcedToeat == false){
		printf("I'm hungry, but I could eat: %s", risOR?"true":"false");
		printf("\n");
	}
	
	if(Hunger != false){
		printf("I'm not hungry!: %s", risNOT?"true":"false");
	}
}
