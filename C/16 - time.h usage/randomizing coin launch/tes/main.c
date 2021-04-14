/*This is a simple program that simulated the coin launch, and indicates if the result was cross or head, you can change the launch numbers  by editing the
    LAUNCHES constant.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LAUNCHES 10


void input()  {

    int coin;

    int cross = 0, head = 0;

    int randval;

    int i;

        for (i = 0; i < LAUNCHES; i++) {


            coin = rand() % (1 - 0 + 1) + 1; //we generate a numbers between 1 and 2. Where 1 is head, two is cross.

            randval = coin;


            if (coin == 1) { //if the coin is head.

                     head += 1;

                printf("\033[0;31mThe value it's head! value: %d\n\n", randval);

            } else { //if the coin is cross.

                    cross += 1;

                    printf("\033[0;33mThe value it's cross! Value:%d\n\n", randval);

            }
        }

                printf("\033[0;37mNumber of times when head came out:%d\n", head);
                printf("\033[0;37mNumber of times when cross came out:%d\n", cross);

}

int main(void) {

    int seed = time(NULL);
    srand(seed);

    input();

    system("pause");
    return 0;

}
