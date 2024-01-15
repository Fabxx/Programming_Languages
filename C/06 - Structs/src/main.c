/*Structures act as blocks of data. We can store variables to be accessed and modified later, or write the struct
  to a file.
  
  Typedef keyword is used to define custom names for default types.

  NOTE: structs can be passed by reference if we make struct pointers.

  NOTE 2: Every pointer in a struct MUST Be allocated, or receive automatic allocation to then be free if not needed.

  union keyword is used to expand the current struct memory block with new data, however
  if we have multiple vars in the union, and we assign data to a variable, the whole union
  will have the same value.
  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
    int a;
    char string[10];
} data;

typedef struct {
    int b;
    char string[10];
} custom;


// Creates two blocks of memory, with a.
struct {
    int a;
} array[2];

/* same as above, but can create copies of N allocated blocks by creating new object.
   in this case each "defarray" object will have 2 blocks*/
typedef struct {
    int a;
} defarray[2]; 

// which is equivalent of this, meaning that we can either create single vars and array of structs, or array of variables inside a single struct.

struct {
    int a[2];
} singleblock;

struct {

    int a;

    union {
        int b, c;
    } dataunion;
    
} unionstruct;


int main(void)
{
    // directly accessing struct variable
   data.a = 10;
   fgets(data.string, sizeof(data.string), stdin);
   data.string[strcspn(data.string, "\n")] = 0;

   printf("Data number: %d\tData String: %s\n", data.a, data.string);

   // defining var to initialize on "custom", which now is of type struct.

   custom str, str2;

   str.b = 10;

    //str 2 will be 0.
   printf("Str number: %d\tStr number: %d\n", str.b, str2.b);

   array[0].a = 24;
   array[1].a = 15;

   printf("Array number 0: %d\tArray number 1: %d\n", array[0].a, array[1].a);

   // defining two more structs, each one with two blocks of data.

   defarray block1, block2;

   block1[0].a = 50, block1[1].a = 25;
   block2[0].a = 77, block2[1].a = 125;

   printf("Block numbers: %d\t%d\t%d\t%d\n", block1[0].a, block1[1].a, block2[0].a, block2[0].a);

   unionstruct.dataunion.b = 10;

   printf("value of union data: %d\t%d\n", unionstruct.dataunion.b, unionstruct.dataunion.c);


   return 0;
}
