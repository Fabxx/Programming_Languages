/* 
    A pointer represents a memory address, which then contains a value.

    Pointers can only be initialized with other pointers (can also assign a pointer value by dereferencing a normal variable with the 
    dereference operator &), or with memory using malloc functions

    Pointers allow to pass values by reference instead of copying the actual value in memory.

    When passing by reference, we are saying pass the memory address of x to y, which then contains 10.

    if we call changeVar(y) without the &, we are copying y into x.

    Pointer initialization requires the * symbol before the var name.

    Remember that variable identifiers will be actual memory locations for the CPU.

    In the struct chapter we will cover struct pointers.

    Array indexes start from 1 when typing them in code, but memory indexing starts from 0,
    so if you need to insert 3 numbers in a array of ints for example, you need to give to it
    size of 4, then in loop it will go from 0 to 3.

    When using a pointer type, that type decides the behavior of the operations carried
    on the pointer variable
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//passing pointer argument, giving arguments to function is called "function overload"
void changeVar(int *x) {
   *x = 10;
}

int main(void)
{
    // POINTER SECTION - INTS
    int y = 0;
    
    printf("Address of y: %p\nValue of y: %d\n", &y, y);

    //make y temporarily a pointer. NOt needed if y is initialized like *y instead.
    changeVar(&y);

    printf("Address of y: %p\nValue of y: %d\n", &y, y);

    /* If variabile is already a pointer, it will need * to access the value.
       This time we don't need & for the memory address, since z is already a pointer.
       
       So "z" is the memory address of z itself, "*z" shows the memory address of y
       stored in z.
       */

    int *z = &y;

    printf("Address of z: %p\nValue of z: %d\n", z, *z);

    
    
    // POINTER SECTION - STRINGS

    char *string = "mystring";

    // equivalent of:

    char string2[] = "mystring";

    // can give a unfixed number of chars to each position, because we point to specific positions and manually allocate them with chars.
    char *stringArr[] = {"string1", "string2", "string3"};

    // equivalent of this, but this requires fixed size

    char stringArr2[3][7] = {"string1", "string2", "string3"};

    /*pointer allocation with malloc. char is 1 byte, so if we need 10 chars, we multiply by 10.
      however it is not a good practice since we don't know how much data to expect, so we either 
      end up with a segmentation fault, or with unused memory*/
    char *allocation = (char*)malloc(sizeof(char)*10);

    // always free a pointer after usage.
    free(allocation);


    // ARRAYS

    // can store 10 chars in 3 individual position, from 0 to 2 in memory.
    char numbers[3][10];

    // can store 3 numbers of lenght 10.
    int nums[3][10];

    for (size_t i = 0; i < 3; i++) {
        fgets(numbers[i], sizeof(numbers[i]), stdin);
        numbers[i][strcspn(numbers[i], "\n")] = 0;

        /*Using two indexes because when storing values, we need to specify the exact position to store and read.*/
        nums[i][i] = atoi(numbers[i]);
        printf("Number: %d\n", nums[i][i]);
    }
    
    // individual array access
    printf("%d\n", nums[0][1]);

    // BOOLEAN POINTERS

    bool *flag = false;

    // to change a pointer state, you must write the pointer with the * symbol

    *flag = !*flag;

    /* Pointers with memory addresses must be initialized in this way, here's an example
        Note that i cast the value to let it interpret as a pointer and not a number.
        Be careful when assigning addresses because they contain random data.
        THis is an example with char but any data type can be used.
    */

    char *addr = (char*)0x14789520;
    

    return 0;
}
