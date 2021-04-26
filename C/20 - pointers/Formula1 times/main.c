/*This program shows the usage of parameter pass by reference using pointers. It generates random values for the times for each car on each lap, then it converts the milliseconds
  to minutes and seconds.*/

#include "lap_times.h"

int main(void) {

    srand(time(NULL));

    int arr[CARS];
    int valori = 0;

    int secondi = 0;
    int minuti = 0;
    int decimi = 0;

    int i;

        randomizer(&valori, arr);
        output_rand(arr);
        ordinamento(arr);
        print_ord(arr);


        for (i = 0; i < CARS; i++) {

            converter(arr[i], &secondi, &minuti, &decimi);

            printf("Auto %d\n", i+1);
            printf("Minuti:%d\n", minuti);
            printf("Secondi:%d\n", secondi);
            printf("Decimi:%d\n", decimi);

        }







        return 0;
}
