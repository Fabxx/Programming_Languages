#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/ * For each function, we indicate the behavior to be performed with the two parameters, finally being functions and not procedures, we return the
   function itself * /

int sum(int a, int b) {

    int sum = a + b;

    return sum;

}

int subtraction(int a, int b) {

    int subtraction = a - b;

    return subtraction;

}

int multiplication (int a, int b) {

    int multiplication = a * b;

    return multiplication;

}

int division(int a, int b) {

    int division = a / b;

    return division;

}

int power(int a) {

    int power;

    power = a * a;

    return power;
}



int cube(int b) {

    int cube = b * b * b;

    return cube;

}

int verify(int a) {

    if (a %2 == 0) {

        puts("The number is even\n");

    } else {

        puts("The number is odd.\n");

    }



}

