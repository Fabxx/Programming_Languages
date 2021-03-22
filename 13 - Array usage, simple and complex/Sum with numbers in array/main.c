#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/*This program shows the usage of a simple array to get multiple numbers and do a sum with them. In this case we do a sum, but it's the same for
  the other operands such as subtraction, ecc.*/

int main() {

    int arr[SIZE]; //our array with the size

    int i;

    int sum = 0; //sum initialized to 0, when we're gonna sum the values of the array on it we will get the right value without errors starting from 0

        printf("Insert the %d numbers\n", SIZE);

        for (i = 0; i < SIZE; i++) {

            scanf("%d", &arr[i]); //we get all the elements for the array with the i index for the position inside arr.

        }

            for (i = 0; i < SIZE; i++) { //same thing as before, but this time we sum each value in i position to sum.

                somma = somma + arr[i];

            }
                printf("Sum:%d\n", sum);

                system("pause");

                return 0;

} //end of function.
