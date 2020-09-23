#include<stdio.h>

/*
uso dello switch - esempio: 
In questo esempio andiamo ad utilizzare una semplice struttura condizionale per verificare se il numero 
che l'utente mette è effettivamente quello. L'esercizio può esssere fatto anche con dei semplici if - statement.
Noi in questo caso lo facciamo con lo switch: una sorta di menu in poche parole

Piersilvio Spicoli - uniba informatica
*/


int main(){
	
	printf("esempio n^2 \n");
	
	int numero; //la variabile dove inserire il valore
	
	printf("Inserire il valore per continuare: (numeri da 1 a 4) \n");
	scanf("%d", &numero);
	
	switch(numero){ //inseriamo il valore da confrontare all'interno del menu
		
		//per confrontare la variabile, bisogna creare dei 'casi' seguendo la seguente sintassi
		
		case 1: //qui si confronta il cont. della variabile con il valore  //NOTA: gli statement switch utilizzano esclusiavmente variabili integer, non di altri tipi
		
			printf("il numero che hai selezionato è : %d", numero); //stampa
		break;	//il programma esce dalla condizione e va in pausa
		
		//ripetiamo per 3 volte
		
		case 2:
			printf("il numero che hai selezionato è : %d", numero);
		break;
		case 3:
			printf("il numero che hai selezionato è : %d", numero);
		break;
		case 4:
			printf("il numero che hai selezionato è : %d", numero);
		break;
		
		//nel caso il numero non sia corretto, allora si può aggiungere un instanza di default seguendo la sintassi che viene
		//NOTA: non è obbligatorio inserirlo
		default:
			printf("il numero non è compreso nel range. riprova! \n");
		break;
	}
}
