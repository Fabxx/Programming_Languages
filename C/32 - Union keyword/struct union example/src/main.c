#include <stdio.h>

/*
A union is a special data type available in C that allows to store different data types in the same 
memory location. You can define a union with many members, but only one member can contain a value at any given time. 
Unions provide an efficient way of using the same memory location for multiple-purpose */

typedef struct str
{
	int a;
	int b;
   //instead of making another struct we can store extra data in the same struct via union.This makes easier to divide data category.
	 union Data
	{
		int c;
		int d;
	} Data;

} str;

int main()
{
	str struct1;
	//direct union access
	union Data dat;
	dat.c;

	scanf("%d", &struct1.a);
	scanf("%d", &struct1.Data.c);
	scanf("%d", &struct1.Data.d);

	/*if i insert the value of C, both C and D will have the same value.
	 when inserting D next, both will have D value*/
	printf("A:%d\nC:%d\nD:%d\n", struct1.a, struct1.Data.c, struct1.Data.d);
	return (0);
}