#include <stdio.h>
#include <stdlib.h>
#define MAX 5

/*Here we show an example about how to access to a specific array position by taking the element address
  with a array pointer, which aims to obtain the memory address of the element we assign to it in the
  square brackets, this is useful for the files, especially if we want to write/read on a specific position*/

int main() {

    int arr[MAX];

    int i;

        for (i = 0; i < MAX; i++) {

            printf("Number %d, position %d\n", i+1, i);
            scanf("%d", &arr[i]);

        }

    int *arrPtr = &arr[3];

    printf("Array element we searched:%d\n", *arrPtr);

    return 0;

}
