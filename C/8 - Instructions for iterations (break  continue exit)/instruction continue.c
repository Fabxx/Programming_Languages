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

      if (number <= 0.0) {continue;}// If the user enters a negative number, it's not added to the result, proseguendo con l'esecuzione

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);//% lf for double types. We approximate the result with two more decimal places
}
