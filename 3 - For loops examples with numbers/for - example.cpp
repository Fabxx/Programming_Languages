// example n ^ 1: print a sequence of numbers adding the variable
// 's' with the current value of the for index 

#include <stdio.h>

int main() {

	printf("1^ esempio");
	printf(" \n");
	
	int s = 0;		//summary: our variable test
	int n = 10;		//maximum number

	for (int i = 0; i < n; i++) {

		s = s + i;
		printf(" \n"); //to wrap each number when printing values
		printf("%d", s);
	}
	printf(" \n");
}


