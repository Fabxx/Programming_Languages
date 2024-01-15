/*
    Enums act as integers, but instead of using explicit numbers, we can give names to those numbers.
    This can make things more clear in the code to understand the logic of a specific number that is 
    expected, instead of trying to figure out why a condition has to be less than X.

    Enums start from 0, we can also assign custom values to a enum.

    A common practice is to write enums in uppercase, to indicate that those are actually enums being used and not some other
    variable.

*/

enum {
    ZERO,
    ONE,
    TWO,
    MYNUMBER = 24
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char a[10];
    int num;
    
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0;
    num = atoi(a);

    if (num == ZERO) {
        printf("num has value: %d\n", num);
    } else if (num == ONE) {
        printf("num has value: %d\n", num);
    } else if (num == TWO) {
        printf("num has value: %d\n", num);
    } else {
        printf("num has value: %d\n", num);
    }

    return 0;
}
