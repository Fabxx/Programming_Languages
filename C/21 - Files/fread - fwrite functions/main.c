#include <stdio.h>
#include <stdlib.h>

int main (FILE* fileptr) {

    int a = 10;

    fileptr = fopen("binary.dat", "w+b");
    
    if (fileptr == NULL) {
        puts("File not created, aborting\n");
    } else
    { //here we say, write number 10, with the size of the variable, in this case an integer, 1 time
      //into the file pointer at the first line, Each line in the file it's like a fileptr++.
        fwrite(&a, sizeof(int), 1, fileptr);
    } //here we read our stored value.

        fread(&a, sizeof(int), 1, fileptr);
        printf("Value from file %d\n", 10);

   return 0;
}