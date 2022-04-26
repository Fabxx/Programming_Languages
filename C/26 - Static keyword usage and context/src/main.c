#include <stdio.h>

//Accessible from other files
void input()
{
    int a;
    scanf("%d", &a);
}

//only accessible in this file. FUnctions that belong to this file can access this.
static void input()
{
    int b;
    scanf("%d", &b);
}

int main(int argc, char const *argv[])
{
    //his value is kept in memory after a function has been executed.
    static int a; 
    printf("Hello World!\n");
    return 0;
}
