#include <stdio.h>
#include <stdlib.h>

int main (FILE* fileptr) {

    int a = 10;

    fileptr = fopen("binary.dat", "w+b");
    
    if (fileptr == NULL) {
        puts("File not created, aborting\n");
    } else
    { /*here we say, write a inside the file only one time. DO NOT USE SIZEOF(INT), THE DATA TYPE SIZE CHANGES BASED ON THE ARCHITECTURE.
        **If we write this program to work on AARCH64 for example, sizeof(int) could be 8 bytes instead of 4 bytes, and we move the
        **pointer in a wrong way. USE DIRECTLY THE SIZE OF THE VARIABLE YOU HAVE TO SEEK/WRITE AS A STANDARD*/
        fwrite(&a, sizeof(a), 1, fileptr);
    } //here we read our stored value.
        fread(&a, sizeof(a), 1, fileptr);
        printf("Value from file %d\n", 10);

   return 0;
}
