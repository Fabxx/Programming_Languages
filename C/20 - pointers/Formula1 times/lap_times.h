#ifndef LAP_TIMES_H_INCLUDED
#define LAP_TIMES_H_INCLUDED

//constants
#define CARS 6
#define SEC 60
#define MIN_TMP 72000 //tempo minimo: 1:20.
#define MAX_TMP 78000 //tempo massimo: 1:30.

//libraries

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomizer(int *a, int tempi[]);

void output_rand(int tempi[]);

void converter(int millisecondi, int *secondi, int *minuti, int *decimi);

void ordinamento(int tempi[]);

void print_ord(int tempi[]);

#endif // LAP_TIMES_H_INCLUDED
