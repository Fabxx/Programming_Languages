/*This program shows how the keyword "static" behaves on the variables/functions.*/
#include <stdio.h>
#include <stdlib.h>

void sum();

int main(void) {

    int i;
    
    /*When we recall the sum function for multiple times, each cicle will keep the previous sum value since it's a static value, it will not be lost after 
    the sum function is over*/

    for (i = 0; i < 2; i++) {

        sum();
    }

}

void sum() {

    int a = 10;
    int b = 5;
    
     /*Our static variable, which will store the value in it's memory address until the funciton it's finished. Once the function it's finished, 
    the value it's not lost*/

    static int sum = 0;

            sum += a;
            sum += b;

            printf("sum:%d\n", sum);
        }

