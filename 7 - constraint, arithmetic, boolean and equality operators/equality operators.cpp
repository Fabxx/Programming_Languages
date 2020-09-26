#include<stdio.h>
/*
operatori algebrici:
in questo esempio creamo una semplice condizione
che ci consente di capire se l'età che inseriamo 
riesca a dire se siamo maggiorenni oppure no

ne utilizzeremo solo uno, considerando che chi legga sappia 
in minima parte gli operatori (<, >, =, <=, =>)

spicoli piersilvio - uniba informatica
*/

int main(){
	
	int age;
	
	printf("How old are u?\n");
	scanf("%d", &age);
	
	if(age < 18){
		
		printf("sei minorenne!");
	}else{
		printf("sei maggiorenne!");
	}
}
