/*This program shows how to access to a structure element with pointers*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int a;
    int b;

} structure;

//We recall the structure and declare a pointer, hwich initially iss etted to NULL.

void input(structure *strptr);

int main(void) {

    int ptr = 0;

   input(&ptr);

    return 0;

}

void input(structure *strptr) {

     printf("Insert first value\n");
    scanf("%d", &strptr->a);

    printf("Insert second value\n");
    scanf("%d", &strptr->b);

    printf("A:%d\nB:%d\n", strptr->a, strptr->b);

}
