/*Can be used to do different operations at compile time, such as:

 -defining variables
 -compiling specific functions based on macro (example, using a function only if under linux/windows).

 For macro list, see here: 

 https://github.com/cpredef/predef
*/

#include <stdio.h>


#ifdef __linux__

void Function() {
    printf("printing in linux!\n");
}

#elif defined _WIN32

void Function() {
    printf("printing in windows!\n");
}

#endif

#ifndef variable

#define variable

#endif

int main(void)
{
    Function();

    #ifdef variable
        printf("Variable has been defined at compile time\n");
    #endif

    return 0;
}
