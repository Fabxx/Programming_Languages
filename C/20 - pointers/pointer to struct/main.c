/*This program shows how to access to a structure element with pointers*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int a;
    int b;

} structure;

//We recall the structure and declare a pointer, which initially is setted to NULL.

void input(structure *strptr);

int main(void) {

    structure str;

   input(&str);

    return 0;
}

void input(structure *strptr) {

     printf("Insert first value\n");
    scanf("%d", &strptr->a);

    printf("Insert second value\n");
    scanf("%d", &strptr->b);

    printf("A:%d\nB:%d\n", strptr->a, strptr->b);

}
