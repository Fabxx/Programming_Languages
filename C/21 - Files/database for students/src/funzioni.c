#include "../include/librerie.h"
#include "../include/struct.h"

void makefile() {
    
    FILE *fileptr;
    fileptr = fopen("file.txt", "w+");
    if(fileptr == NULL) {
        exit(1);
    }
    fclose(fileptr);
}
//array for the struct s[].
void input(studenti s[]) {
   
    int i, j;
    FILE *fileptr;
    fileptr = fopen("file.txt", "r+");

    for(i = 0; i < STUDENTI; i++) {
        puts("Inserisci nome studente:");
        fgets(s[i].nominativo, 100, stdin);

         puts("Inserisci voto: ");

        for(j = 0; j < VOTI; j++) {
            scanf("%f", &s[i].voto[j]);
        } 
        fflush(stdin);

        fprintf(fileptr, "%s\n", s[i].nominativo);
        for(j = 0; j < VOTI; j++){
            fprintf(fileptr, "%.2f\n", s[i].voto[j]);
        }
       
    }
        fclose(fileptr);
       
}

void average(studenti s[]) {

    int i, j;
    float somma = 0;
    float media = 0;

    FILE *fileptr;
    //media voti scritta dopo i voti.
    fileptr = fopen("file.txt", "a+");

        for (i=0; i<STUDENTI; i++) {
            for(j=0; j<VOTI; j++) {
                somma+= s[i].voto[j];
            }
                media = somma / VOTI;
                fprintf(fileptr, "Media:%.2f\n", media);
                
        }
            fclose(fileptr);
}