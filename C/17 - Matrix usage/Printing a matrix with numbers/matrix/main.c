/*This program shows how to print a matrix of numbers in C, by putting numbers*/

#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COLUMN 2

//note: THE COLUMN INDICATES THE LENGHT OF THE ROW, if we have 2 row with 4 colums for example, a single row can contain 4 numbers
//same for characters, each character is correspondant to a column position. {h e l l o} it's 1 row, with 5 columns

/*This program shows how to print a matrix of numbers in C, by putting numbers*/
void input();

void input() {


    int matrix[ROW][COLUMN]; //our matrix

    int i, j;

        /*We cicle for both rows and columns, we ask to insert a number for each position in the matrix, the first number will be in the position 1x1
            the second number in the posiiton 1x2, where 1 is the row, 2 is the number of the columns and so on, the double for it's needed 
            for numbers only, if we use strings, we need only one for and with fgets we already tell the size of the string that needs to be captured*/

        for (i = 0; i < ROW; i++) {

            printf("Insert the number for the %d row.\n", i+1);

            for (j = 0; j < COLUMN; j++) {


                scanf("%d", &matrix[i][j]);

            }
        }

        /*We do again the for cicle to print the matrix by following the size of it, the numbers will be printed in orders of position, 1x1, 1x2 ecc.
            the last printf helps us to distinguish the rows and the columns by going at the end of the line after the first row is printed.*/

            //note, the two for are only necessary if we want to print graphically like a real matrix.

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

