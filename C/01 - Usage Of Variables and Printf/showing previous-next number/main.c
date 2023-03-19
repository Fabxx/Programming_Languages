#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    puts("Insert a number.\n");
    scanf("%d", &number);

    printf("The number inserted is %d.\n", number);

    printf("The previous number is %d\n", number - 1);

    printf("The next number is %d\n", number + 1);

}
