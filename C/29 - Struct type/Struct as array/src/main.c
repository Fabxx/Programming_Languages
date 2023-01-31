#include <stdio.h>
#include <stdlib.h>

/* A struct can be treated as an array, each position creates a block of the structure with it's variables in.
	Here we create a structure array of 2, each position will have the bytes of each block in memory,
	in this case, 2 + n bytes per block, where n is the string as variable size.
	Each block will store different values for A and B and the name. 
	
	Alternatively we can do values inside as arrays instead of the struct
	but the occupied memory size will be the same, since a struct increases his size based on the variables inside.

	NOTE: This practice can be used with sorting algorithms where you have to order multiple data, with arrays inside the struct
	you could do sorting too, but it would be more tedious to write as you have to swap each variable manually. Instead
	with struct blocks we can use a temp variable, and swap the memory block directly.

	 */

typedef struct
{
	__int16_t number;
	char *name;
} strarr;

typedef struct
{
	__int16_t numbers[2];
	char *name[2];
} structure;


int main()
{
	strarr array[2];
	structure str;

	array[0].name = (char*)malloc(sizeof(char));
	array[1].name = (char*)malloc(sizeof(char));

	str.name[0] = (char*)malloc(sizeof(char));
	str.name[1] = (char*)malloc(sizeof(char));

	//note: input can be done with FOR as well
	
	for (size_t i = 0; i < 2; i++)
	{
		printf("Insert Age and Name of %ld user", i+1);
		scanf("%hd %s", &array[i].number, array[i].name);
	}

	system("clear");

	for (size_t i = 0; i < 2; i++)
	{
		printf("Insert Age and Name of the %ld user in non array struct", i+1);
		scanf("%hd %s", &str.numbers[i], str.name[i]);
	}
	

	system("clear");

	//sorting the structures directly instead of taking each single variable position.
	if (array[0].number > array[1].number)
	{
		strarr tmp;

		tmp = array[0];
		array[0] = array[1];
		array[1] = tmp;
	}

	//doing the manual exchange would be something like this, we have to exchange each value manually in the structure, 
	//you can notice that it's much easier to exchange the packed block of data instead, and it's more clean to write.

	if (str.numbers[0] > str.numbers[1])
	{
		int tmpval;
		char *tmpstring;

		tmpval = str.numbers[0];
		str.numbers[0] = str.numbers[1];
		str.numbers[1] = tmpval;

		tmpstring = str.name[0];
		str.name[0] = str.name[1];
		str.name[1] = tmpstring;

	}

	printf("Values of 1:\n%d\n%s\n", array[0].number, array[0].name);
	printf("Values of 2:\n%d\n%s\n", array[1].number, array[1].name);

	printf("Values of non array struct:\n");

	printf("%d\n%s\n", str.numbers[0], str.name[0]);
	printf("%d\n%s\n", str.numbers[1], str.name[1]);

	free(array[0].name);
	free(array[1].name);
	free(str.name[0]);
	free(str.name[1]);


	return (0);
}
