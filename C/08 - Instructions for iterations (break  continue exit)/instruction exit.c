#include<stdio.h>
#include<stdlib.h>
/*
exit statement:
we use the same source we used before, only when
a negative number is entered, the program exits the cycle and blocks the program

piersilvio spicoli - uniba informatica
*/

int main(){
	
   double number, sum = 0.0;
   int i;
   
   for (i = 1; i <= 5; i++) {
   	
      printf("Enter a n%d: ", i);
      scanf("%lf", &number); 

      if (number <= 0.0) {
      	
	  	printf("negative number! let me close the program!");
	  	exit(0);
	  }

      sum += number; 
   }

   printf("Sum = %.2lf", sum);
}
