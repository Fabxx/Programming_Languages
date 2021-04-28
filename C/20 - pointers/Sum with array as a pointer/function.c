#include "function.h"

/*We initialize our array, so we can take the memory address of each
  element in the array position*/

void input(int arr[]) {

    int *arrPtr = arr;

    int i, sum = 0;

        printf("Insert the %d numbers\n", SIZE);

        /*We normally insert the numbers like a normal array capture,
        but instead further we proceed to take the memory address of
        each element throught the pointer, by doing the sum of the current element.
        then we increase the pointer to 1 which will proceed to take the next
        memory address for the value. changing from arr (element 0) to
        arr (element 1) and so on*/

        for (i = 0; i < SIZE; i++) {

                scanf("%d", &arr[i]);

                sum+= *arrPtr;

                arrPtr+=1;

        }
            printf("Sum:%d\n", sum);

}
