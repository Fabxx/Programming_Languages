#include <stdio.h>
int main(int argc, char const *argv[])
{
    char buffer[256]; //buffer to be used

    //variables to be printed must be const char *, they don't have to be edited in memory and we need to access the memory via pointer.
    const char *name = "Revix"; 
                                

    //printing the strings in the memory buffer provided and stored in here.
    snprintf(buffer, sizeof(buffer),
        "My name is: %s\n", name);

        printf("The string printed in the buffer is: %s\n\n", buffer);
    
    return 0;
}
