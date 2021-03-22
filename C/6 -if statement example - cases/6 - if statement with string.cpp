#include<stdio.h>
#include<string.h>
/*
Compares two strings through strcmp function. 
this function matches character by character until it has reached either the null value ([\ 0]) of the strings
returns a real value: if equal to 0, strings are identical, if greater than 0, string1 has characters that are greater than string2 in the ASCII table. 
if smaller, the other way around.
the result of the function will return a value corresponding to the ASCII table.

spicoli piersilvio - uniba informatica

*/
int main(){
	
	char stringa1[50], stringa2[50]; 
	
	printf("stringa n^1: \n");
	scanf("%s", stringa1);
	printf("stringa n^2: \n");		//input
	scanf("%s", stringa2);
	
	if(strcmp(stringa1, stringa2) == 0){
		
		printf("le stringhe sono uguali ! \n");
		printf("%s ", stringa1);
		printf("%s", stringa2);
		
	}else{
		
		printf("le stringhe non sono uguali ! \n");
		printf("%s ", stringa1);
		printf("%s", stringa2);
	}
}
