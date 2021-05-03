/*A program that shows a file creation where we store our data*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void input(int array[], FILE *fileptr);

int main(void) {

    int array[SIZE];
    FILE fileptr;

    input(array, &fileptr);
    return 0;
}

void input(int arr[], FILE *fileptr) {

    int i;

    fileptr = fopen("numbers.txt", "w");

    if(fileptr == NULL) {
        puts("File not found, retrying to create it.\n");
        fileptr = fopen("numbers.dat", "w");
        if(fileptr == NULL){
            puts("Creation failed twice, aborting...\n");
            exit(1);
        }

    }
        for(i=0; i<SIZE; i++) {
            printf("Insert the %d number.\n", i+1);
            scanf("%d", &arr[i]);
            fprintf(fileptr, "%d Number:%d\n", i+1, arr[i]);

        }
            fclose(fileptr);
}

