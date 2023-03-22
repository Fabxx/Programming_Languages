#include <stdio.h>
#include <stdlib.h>
#define MAX 5

/*Here we show an example about how to access to a specific array position by taking the element address
  with a array pointer, which aims to obtain the memory address of the element we assign to it in the
  square brackets, this is useful for the files, especially if we want to write/read on a specific position
  
  NOTE: In function overloads, where these require a variable as a pointer, but you have a normal variable,
        you can temporarily make the var a pointer inside the argument with & symbol. Like parameter pass.*/

int main() {
    
  //equivalent of int *arr = (int*)malloc(sizeof(int)*MAX); which gives MAX positions.
    int arr[MAX];

    int i;

        for (i = 0; i < MAX; i++) {

            printf("Number %d, position %d\n", i+1, i);
            scanf("%d", &arr[i]);

        }
    
  //can also do = arr[3] if int *arr[MAX] is declared like this already.
  //NOTE: the number in the brackets matches the position in the array, starting from 0.
    int *arrPtr = &arr[3];

    printf("Array element we searched:%d\n", *arrPtr);
  
  //ALWAYS FREE THE MEMORY ALLOCATED IF YOU DON'T NEED IT ANYMORE.
  free(arrPtr);

    return 0;

}
