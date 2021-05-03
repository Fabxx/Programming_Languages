/*Since an array it's a pointer by itself, in the for we can put a pointer to access the memory
  addresses of it's elements, then we sum the pass array with i to access a different position
  of the array, since by default the array position is setted to 0, then we replace the characters we want*/
#include "obfuscator.h"

void password(char pass[]) {

    int i;

        printf("Insert the password, max %d characters\n", LENGHT);
        fflush(stdin);
        gets(pass);

        for(i=MIN; i<MAX; i++){

            *(pass+i) = '*';
        }
         printf("Password:%s\n", pass);
}
