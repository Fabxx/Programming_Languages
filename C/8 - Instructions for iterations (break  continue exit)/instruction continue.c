#include <stdio.h>

/*
the instruction continue:
The continue statement skips the current iteration of the loop and continues with the next iteration.

piersilvio spicoli - uniba informatica
*/

int main() {

   double number, sum = 0.0;
   int i;
   
   for (i = 1; i <= 5; i++) {
   	
      printf("Enter a n%d: ", i);
      scanf("%lf", &number); //% lf for double types
      
      //If the number condition is respected, the program continues the loop and does the sum.
      if (number < 10.0) 
      {
         continue;
      }
      
      sum += number;
      
      //Equivalent of
      if (number < 10.0)
      {
         sum += number;
      }
      else
      {
         i = 5;
      }
      
   }

   printf("Sum = %.2lf", sum);
}
