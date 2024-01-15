/*What happens under the hood is this:

  -The instruction pointer calls the "main" stack frame, and starts from the first memory address of it 
  -When the instruction pointer reaches "func", the system gets a copy of the last reached address in main
    then, the instruction pointer gets updates to the new stack frame in memory of "func" to be executed
  -Once the stack frame of func is done, the program jumps back to main stack frame and ends its execution.

  With functions we can exploit the pass by reference showcased in chapter 05

  WIth functions we can also return values corresponding to the types we need.
*/

#include <stdio.h>



typedef struct {
    int a, b;
} mydata;

void func() {
    printf("Printing from function\n");
}

void structPass(mydata *data) {
    data->a = 10;
    data->b = 20;
}

void printStruct(mydata *data) {
    printf("%d\n%d\n", data->a, data->b);
}

int returnNumber(void) {
    return 10;
}

char *newString(void) {
    return "new string!";
}

int main(void)
{
    mydata newData;
    int x = 0;
    char *string = NULL;
    structPass(&newData);
    printStruct(&newData);

    x = returnNumber(); 
    string = newString();   

    printf("%d\t%s\n", x, string);

    return 0;
}
