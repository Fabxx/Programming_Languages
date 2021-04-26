

#include "lap_times.h"

void randomizer(int *a, int tempi[]) {

    int i;

        for (i = 0; i < CARS; i++) {

                *a = rand() % (MAX_TMP - MIN_TMP + 1) + MIN_TMP;

            tempi[i] = *a; //in millisecondi 1:20 corrisponde a 72000ms, 1:30 a 78000ms.
        }
}

void output_rand(int tempi[]) {

    int i;

        for (i = 0; i < CARS; i++) {

            printf("Tempo auto %d:%d\n", i+1, tempi[i]);

        }
}


void ordinamento(int tempi[]) {

    int p = CARS;

    int i, temp;

        for (i = 0; i < p-1; i++) {

            if (tempi[i] > tempi[i+1]) {

                temp = tempi[i];
                tempi[i] = tempi[i+1];
                tempi[i+1] = temp;

            }
            p -=1;
        }
}

void print_ord(int tempi[]) {

    int i;

        for (i = 0; i < CARS; i++) {

            printf("Tempo ordinato auto %d:%d\n", i+1, tempi[i]);

        }

}

void converter(int millisecondi, int *secondi, int *minuti, int *decimi) {


                *secondi = millisecondi / 1000;
                *minuti = *secondi / 60;
                *decimi = millisecondi - (*secondi * 1000);
                *secondi = *secondi - (*minuti * 60);

}

