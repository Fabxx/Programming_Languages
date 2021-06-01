#include <stdio.h>
#include <stdlib.h>

int clear_input_error(char* string){

    //we get something on the pointer string, after the input there might be a new line (\n).

    //We remove the newline after the user input aka \n, this can cause a segmentation fault in the buffer.
    //Returns 0 if we have success and we don't clean the buffer because it's empty, there's no \n on it.
    //Returns 1 if we didn't found any new line, and we clean the buffer.
    //in C, NULL result points to 0x0, which causes a segmentation fault, if we find a \n
    //we avoid that it goes in 0x0 by cleaning the buffer.
    int result = 0;
    char* charptr;

    charptr = strstr(string, "\n");
    if(charptr != NULL){
        charptr = 0;
    }else{
        while(getchar() != '\n');
        result = 1;
    }

    return result;
}