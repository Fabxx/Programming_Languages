#include <stdio.h>
#include <stdlib.h>
#define MAX 2

void calcs (int numbers[]); //declaration of void function with the parameters

int main(void) { //main function

     int n[MAX]; //array used to pass the values to numbers.


    calcs(n); //calling calcs funciton with n array parameter, so the values that will go in n array will pass in numbers array.

    system("pause");

    return 0;
}


void calcs(int numbers[]) {

    int i;
    int sum;

        for (i = 0; i < MAX; i++) {

            printf("Insert the numbers\n");
            scanf("%d", &numbers[i]);
             
             sum = sum + numbers[i];

        }
                printf("Sum:%d\n", sum);
}
