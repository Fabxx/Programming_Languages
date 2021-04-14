/*This program shows how to print a matrix of numbers in C, by putting numbers*/

#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COLUMN 2


void input();

void input() {


    int matrix[ROW][COLUMN]; //our matrix

    int i, j;

        /*We cicle for both rows and columns, we ask to insert a number for each position in the matrix, the first number will be in the position 1x1
            the second number in the posiiton 1x2, and so on*/

        for (i = 0; i < ROW; i++) {

            printf("Insert the number for the %d row.\n", i+1);

            for (j = 0; j < COLUMN; j++) {

                scanf("%d", &matrix[i][j]);

            }
        }

        /*We do again the for cicle to print the matrix by following the size of it, the numbers will be printed in orders of position, 1x1, 1x2 ecc.
            the last printf helps us to distinguish the rows and the columns by going at the end of the line after the first row is printed.*/

        for (i = 0; i < ROW; i++) {
            for (j = 0; j < COLUMN; j++) {

                 printf("%d\t", matrix[i][j]);
            }
                    printf("\n");
        }
}

int main(void) {

    input();
}
