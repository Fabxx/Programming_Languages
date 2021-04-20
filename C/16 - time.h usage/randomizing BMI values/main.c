#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5
#define CAT 40 //range for age category.
#define MIN_BMI 18
#define NORM_BMI 25

typedef struct {

     int weight;
     int height;
     int age;
     float bmi;

} dati;

   dati arr[MAX];


/*In order, these functions do:

1) The function generates random values from the variables in the struct.
2) The function prints out the random values generated before.
3) The function fetches the highest height with samples over age 40.
4) The function fetches the highest height with samples under age 40.
4) The function calculates the average Body Mass Index with samples over age 40
5) The function calculates the average Body Mass Index with samples under age 40
6) The function fetches the max weight with samples over age 40
7) The function fetches the max weight with samples under age 40
*/


/*Note: to make some text more clear, i used some color codes in the printf/puts functions to make it more clear on which state the message
 was printing on. If the message is positive then you get a green text, and viceversa for yellow and red. IF this thing might not work for you, you can
 simply ignore these kinda of codes: \033[0;32m, or you can delete them if it's unhandy for you to read the strings.*/


   void randomizer();
   void print_rand();

   void max_height_over();
   void max_height_under();

   void average_bmi_over();
   void average_bmi_under();

   void max_weight_over();
   void max_weight_under();



//inizio blocco funzione principale.

int main(void) {

      int seed = time(NULL);
      srand(seed);


       randomizer();
       print_rand();

       max_height_over();
       max_height_under();

       max_weight_over();
       max_weight_under();

       average_bmi_under();
       average_bmi_over();

       puts("Repeat?\n");

       system("pause");

        return 0;
}


void randomizer() {

      int i;


        for (i = 0; i < MAX; i++) {


            int randage = rand() % 140 + 18;

            arr[i].age = randage;

            int randweight = rand() % 150 + 45;

            arr[i].weight = randweight;

            int randheight = rand() % 2 + 1; //Expression in meters.

            arr[i].height = randheight;

            arr[i].bmi = (arr[i].weight)/(arr[i].height * arr[i].height);



        }

}




void print_rand() {

     int i;

    for (i = 0; i < MAX; i++) {

        printf("Height:%d\n\n"
               "Weight:%d\n\n"
               "Age:%d\n\n"
               "Bmi:%.2f\n\n", arr[i].height, arr[i].weight, arr[i].age, arr[i].bmi);
    }
}



void max_height_over() {

    int i;

    int max_over = 0;


    for (i = 0; i < MAX; i++) {

            if (arr[i].age > CAT) {

                if (arr[i].height > max_over) {

                    max_over = arr[i].height;

            }
        }
    }

            printf("Max height over 40:%d meters\n", max_over);
}


void max_height_under() {

   int i;

  int max_under = 0;


    for (i = 0; i < MAX; i++) {

        if (arr[i].age < CAT) {

                if (arr[i].age > max_under) {

                 max_under = arr[i].age;

            }


        }


    }

      printf("Max height under 40:%d metri\n\n", max_under);


}



void max_weight_over() {

   int i;

  int weight_over = 0;


    for (i = 0; i < MAX; i++) {

        if (arr[i].age > CAT) {

                if (arr[i].weight > weight_over) {

                 weight_over = arr[i].weight;

            }


        }


    }

      printf("Max weight over 40:%d\n", weight_over);


}


void max_weight_under() {

   int i;

  int weight_under = 0;


    for (i = 0; i < MAX; i++) {

            if (arr[i].age < CAT) {

                if (arr[i].weight > weight_under) {

                    weight_under = arr[i].weight;

            }


        }


    }

      printf("Max weight under 40:%d\n\n", weight_under);

}


void average_bmi_under() {

    int i;

    float sum_bmi = 0;

    float average_bmi_under;

        for (i = 0; i < MAX; i++) {

            if (arr[i].age < CAT) {

                    sum_bmi += arr[i].bmi;

            }
                    average_bmi_under = sum_bmi / MAX;
        }

            printf("\033[0;37mBMI average under 40: \033[0;31m%.2f\n\n", average_bmi_under);


                    if (average_bmi_under > NORM_BMI) {

                        puts("\033[0;31mThe sample is overweight.\n\n");

                    } else if (average_bmi_under > MIN_BMI && average_bmi_under <= NORM_BMI) {

                        puts("\033[0;32mThe sample is normalweight\n\n");

                    } else {

                        puts("\033[0;33mThe sample is underweight.\n\n");

                    }
}


void average_bmi_over() {

        int i;

        float sum_bmi = 0;

        float average_bmi_over;

            for (i = 0; i < MAX; i++) {

                if (arr[i].age > CAT) {

                        sum_bmi += arr[i].bmi;

                }
                        average_bmi_over = sum_bmi / MAX;
        }

                        printf("\033[0;37mBMI average under 40: \033[0;31m%.2f\n\n", average_bmi_over);

                    if (average_bmi_over > MIN_BMI) {

                        puts("\033[0;31mThe Sample is overweight\n");

                    } else if (average_bmi_over > MIN_BMI && average_bmi_over <= NORM_BMI) {

                        puts("\033[0;32mThe sample is normalweight\n");

                    } else {

                        puts("\033[0;33mThe sample is underweight\n");

              }


}
