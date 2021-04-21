/*This program shows how the keyword "static" behaves on the variables/functions.*/

#include <stdio.h>
#include <stdlib.h>

void static_sample();

int main(void) {


    static_sample();

}


void static_sample() {

    /*Our static variable, which will store the value in it's memory address until the funciton it's finished. Once the function it's finished, the value
      it's not destroyed*/

     static int a = 0;

            while (a < 10) {

                //Increment of the variable.
                a++;

                //We print the furst value stored.

                printf("static A Value: %d\n", a);

            /*after increasing again the value, even after exiting the previous function, the int didn't lost it's previous value, which was 1.
              so after we increase it again, we will get 2 instead of 1, because it will not start from 0*/
    }
}



