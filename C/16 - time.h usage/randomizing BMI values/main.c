/*This program lets you retreive the BMI for each sample by generating randomic values for the height and the weight. From these two values we can generate
  automatically the Body Mass Index value for each sample.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5
#define MIN_NORM_BMI 18.5
#define MAX_NORM_BMI 24.9




typedef struct {

    int randheight;
    int randweight;
    int randbmi;
    int maxbmi;

} dati;

    dati arr[MAX];

/*In order, these functions do this:

1) The function generated random values from the variables in the struct.
2) The function prints out the BMI retreived from the random values.
3) The function calculates the average between all the BMI samples.
4) The function finds out which is the biggest BMI between all the samples.
*/


void rand_bmi();
void print_bmi();
void average_bmi();
void max_bmi();


//main function.

int main(void) {

    int seed = time(NULL);
    srand(seed);

    rand_bmi();
    print_bmi();
    average_bmi();
    max_bmi();
    system("pause");
    return 0;

}

void rand_bmi() {

    int i;

        for (i = 0; i < MAX; i++) {


             arr[i].randheight = rand() % (2 - 1 + 1) + 1; //height value expressed in meters.
            arr[i].randweight = rand() % (120 - 60 + 1) + 60; //weight expressed in kg.

            arr[i].randbmi = arr[i].randweight / (arr[i].randheight * arr[i].randheight);

        }

}



void print_bmi() {

        int i;

            for (i = 0; i < MAX; i++) {

                printf("\033[0;37m%d persona:\n\n", i+1);

                 printf("\033[0;37mHeight:%d\n"
                   "\033[0;37mWeight:%d\n", arr[i].randheight, arr[i].randweight);

                   printf("\033[0;37mBMI:%d\n", arr[i].randbmi);

                   if (arr[i].randbmi == MIN_NORM_BMI || arr[i].randbmi <= MAX_NORM_BMI) {

                        printf("\033[0;32mThe %d person has a normal weight.\n", i+1);

                   } else if (arr[i].randbmi < MIN_NORM_BMI) {

                              printf("\033[0;33mThe %d person has a underweight state.\n", i+1);

                    } else {
                                printf("\033[0;31mThe %d person has a overweight state.\n", i+1);

                              }
            }
}

void average_bmi() {


    int i, sum = 0;

    int average_bmi = 0;

        for (i = 0; i < MAX; i++) {

            sum += arr[i].randbmi;


        }
            average_bmi = sum / MAX;

            printf("\n\n\033[0;37mAverage BMI bewteen %d samples:%d\n", MAX, average_bmi);

}


void max_bmi() {


    int i, maxbmi = 0;

        for (i = 0; i < MAX; i++) {

            if (arr[i].randbmi > maxbmi) {

                    maxbmi = arr[i].randbmi;


            }


        }

            printf("Max BMI:%d\n", maxbmi);
}


