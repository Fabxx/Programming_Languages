//esempio n^1: stampa di una successione di numeri sommando la variabile 
//'s' con il valore corrente dell'indice del for 

#include <stdio.h>

int main() {

	printf("1^ esempio");
	printf(" \n");
	
	int s = 0;		//sommatoria: la nostra variabile di test
	int n = 10;		//numero massimo

	for (int i = 0; i < n; i++) {

		s = s + i;
		printf(" \n"); //per far andare a capo ogni num durante la stampa dei valori
		printf("%d", s);
	}
	printf(" \n");
}


