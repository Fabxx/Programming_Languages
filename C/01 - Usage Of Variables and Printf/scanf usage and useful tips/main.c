#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 0, b = 0;
    printf("Insert numbers");
    /*If we do the scanf like so, the white space will be counted as a terminal character, which means that in the terminal we won't
      have to press enter for each number we want to put, but it will be separated automatically per variable. 

      SO at the input in the console we can type directly for example: 15 80 and then press enter, the space in between will be a separator for each 
      variable.*/
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);
    return 0; 
}