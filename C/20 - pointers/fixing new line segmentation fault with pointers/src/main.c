//we get something on the pointer string, after the input there might be a new line (\n).
    //We remove the newline after the user input aka \n, this can cause a segmentation fault in the buffer.
    //Returns 0 if we have success and we clean the buffer to avoid memory leftovers, there will be no \n on it.
    //Returns 1 if we didn't found any new line, and we clean the buffer.
    //in C, NULL result points to 0x0, which causes a segmentation fault, if we find a \n
    //we avoid that it goes in 0x0 by cleaning the buffer.

/*Note: doing charptr = strstr, and *charptr = strstr it's different, basically what happens is this:
*charptr = strstr says, on the memory cell that you're already pointing to, replace the value with what you got assigned, we replace
the value of charptr itself directly.

charptr = strstr says, point to another memory cell (which means another pointer variable like char* string), and do strstr on it. 
We needed to point to char* string[], so we did the assignment without the * symbol, to change the variable we wanted to point to.
If we wanted to edit the pointer memory itself, we can put the full pointer with the *.
*/

#include <stdio.h>
#include <stdlib.h>

int clear_input_error(char* string[]){

   int result = 0;
    char* charptr;

    charptr = strstr(string, "\n"); 
    
    if(charptr != NULL){
        *charptr = 0; //if we find a \n, the memory address of the pointer containing \n becomes 0.
    }else{
        while(getchar() != '\n');
        result = 1;
    }

    return result;
}
