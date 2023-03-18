/**
 * @file main.c
 * @author Fabxx
 * @brief When needed, a single function can return multiple expected results, based on the context, and type of function.
 *        This practice can be useful to avoid nested if conditions in some cases, where we can simply return the value
 *        based on the result of the operation, and then continue if not returned.
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

//a void function always returns NULL. not necessary to write the return type.
void func(void)
{
    return NULL;
}

//if A condition is not met, return b instead.
int func1(void)
{
    int a = 0, b = 1;
    scanf("%d", &a);

    if (a >= 10) return a;

    return b;
}

//with char functions it's possible to return strings.
char *func2(void)
{
    return "Returned A";
}

char *func3(void)
{
    return "Returned B";
}

int main(void)
{
    int a = 0;

    func();
    a = func1();
    if (a >= 10) printf("%s\n", func2());
    if (a <= 10) printf("%s\n", func3());
    
    return 0;
}
