/*Here we make the instructions  for the declared functions in the .h file*/

#include <stdio.h>
#include <stdlib.h>

void sum() {

    int a = 10;
    int b = 10;

    static int sum;

    sum += a;
    sum += b;

    printf("Sum:%d\n", sum);


}

void sub() {

     int a = 20;
     int b = 10;

    static int sub;

    sub -= a;
    sub -= b;

    printf("Sub:%d\n", sub);

}
