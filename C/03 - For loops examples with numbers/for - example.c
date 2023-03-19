// example n ^ 1: print a sequence of numbers adding the variable
// 's' with the current value of the for index 

#include <stdio.h>

int main() {

	printf("1^ esempio");
	printf(" \n");

	int s = 0;		//summary: our variable test
	int n = 10;		//maximum number
	
	/*What happens is that until i has reached n number of elements, increase it and do the operation below.
	NOTE: It's not necessary to put arguments like this inside the for, these are treated as argument and in some cases
	      can be left empty, or more can be put. i.e: 
	      -for (i = 0; i < n; ;) in this case i can do i++ later when i need it*/
	
	for (int i = 0; i < n; i++) {

		s = s + i;
		printf(" \n"); //to wrap each number when printing values
		printf("%d", s);
	}
	
	//second example with two indexes in for. NOTE: J is not required as a condition or else that will take priority over i.
	for (size_t i = 0, j = 0; i < 10; i++, j++) {
		if (j < 5) {
			printf("Hello j\t");
		}
		printf("Hello i\n");
	}
	printf(" \n");
}


