/*
    Showing usage of conditionals.

    syntax:

    == matches

    != different from

    <= >= less or equal than/greater or equal than

    &&, ||, ! boolean operators AND, OR, NOT.

    NOT operator can be used to negate conditions, example:

     if (!(b == 0)) is equivalent to if (b != 0)

     boolean conditions can be init with true or false.

     these conditions can be used with different syntax ways:

     if (condition) {

     }

     or

     if (!condition) {

     }

     if (condition == true) {

     }

     if (condition == false) {

     }

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{

    int a = 0, b = 5;
    bool condition = false;

    if (a == 0) {
        printf("a is 0\n");

        //This block will execute only if first if is not matched, making a nested condition.
    } else if (b != 0) {
        printf("b is different from 0\n");
    }

    //if only block, will not skip next instructions.

    if (b == 0) {
        printf("Printing this string and continuing\n");
    }

    //Checking both conditions or only one of the two

    if (a == 0 && b == 0) {
        printf("both values are 0\n");
    }

    if (a == 0 || b != 0) {
        printf("at least one value matches the condition\n");
    }


    //checking if b is NOT 0

    if (!(b == 0)) {
        printf("b is not 0\n");
    } 

    //checking if condition is false.

    if (!condition) {
        printf("boolean is false\n");
    }   


    // SWITCH CASE SECTION - with int.

    char num[10];
    fgets(num, sizeof(num), stdin);

    int number = atoi(num);

    switch(number) {
        case 1:
            printf("number was 1\n");
            break;
        case 2:
            printf("number was 2\n");
            break;
        default:
            printf("Number was neither 1 or 2\n");
            break;
    }

    // IF-ELSE section - strings/single chars. Strcmp return 0 if strings are equal, 1 if not.

    char string[10];
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    if (strcmp(string, "Deb") == 0) {
        printf("String is Deb\n");
    } else if (strcmp(string, "Arch") == 0) {
        printf("String is Arch\n");
    } else {
        printf("String is neither Deb or Arch: %s\n", string);
    }
    return 0;
}
