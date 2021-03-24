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
	
	char string1[50], string2[50]; 
	
	printf("stringa n^1: \n");
	scanf("%s", string1);
	printf("stringa n^2: \n");		//input
	scanf("%s", string2);
	
	if(strcmp(string2, string2) == 0){ //comparison of the two strings with strcmp function. == 0 because strcmp returns 0 value when the two strings are equal.
		
		printf("The stirngs are the same! \n");
		printf("%s ", string1);
		printf("%s", stringa2);
		
	}else{
		
		printf("The strings are different! \n");
		printf("%s ", string1);
		printf("%s", string2);
	}
}
