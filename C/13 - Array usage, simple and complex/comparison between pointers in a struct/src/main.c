#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARR 10
#define INPUT 2


typedef struct {

 char *string1[ARR];
 char *string2[ARR];

} label;

int main() {

    label data[INPUT];

    for (size_t i = 0; i < INPUT; i++)
    {
        fgets(data[i].string1, sizeof(data[i].string1), stdin);
        fflush(stdin);
        fgets(data[i].string2, sizeof(data[i].string2), stdin);
        fflush(stdin);

         if (strcmp(data[i].string1, data[i].string2) == 0)
        {
        printf("Equal strings. %I64u\n", i+1);
         } else
         {
        printf("Different strings, %I64u\n", i+1);
         }
   
    }

    return 0;
}
    
    
    

    