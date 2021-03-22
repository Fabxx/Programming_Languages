#include<stdio.h>

/*
l'istruzione break:
interrompe le iterazioni di una struttura ciclica ( for, while ) prima del tempo e viene 
usata per forzare l'uscita dla ciclo. 
Solitamente viene sempre associata ad una condizione 'if'

ovviamente non viene soltanto usata all'interno dei cicli, poichè quando entra in esecuzione
mette in attesa il programma, cioè il file exe

piersilvio spicoli - uniba informatica
*/

int main(){
	/*
	stampiamo una successione di simboli (@, #) da 1 a 10
	usando due cicli:
	- while
	- do-while
	*/
	int variableCount = 1;
	
	while(variableCount <= 10){
		
		printf("# ");
		
		if(variableCount == 5){ break; } //se ci troviamo alla quinta iterazione, allora ferma il ciclo		
		
		variableCount++; //incremento
	}
	/*
	uscendo dal ciclo while con break, la variableCount riamane ferma al valore di 5.
	usando il do-while terminiamo la successione con un simbolo dverso arrivando fino a 9, comprendendo che siam partiti da 1.
	*/
	do{
		
		printf(" @");
		
		if(variableCount == 9){ break; } //confronta, se vero allora esce dal ciclo	
		
		variableCount++;
		
	}while(variableCount >= 5);
}
