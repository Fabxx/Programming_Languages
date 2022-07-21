/*An example of changing the pointer position into the struct. Each struct it's a memory block, in this block we have 
 two variables (See chapter 29 for a more detailed explaination). 
 
 To access directly the variable we want we need to seek the pointer of the file to the size of the 
 variable in the structure we want to find.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char *array;
    int b;
} structure;

int main () {

	structure s;
	FILE *fileptr;
	char *ReadedString = (char*)malloc(sizeof(char));
	s.array = (char*)malloc(sizeof(char));
	
	fileptr = fopen("file.txt", "w+b");

	if (fileptr == NULL)
	{
		exit(1);
	}
	
	puts("Insert B number and a string b\n");
	scanf("%d", &s.b);
	scanf("%s", s.array);

	fwrite(&s.b, sizeof(s.b), 1, fileptr);
	fwrite(s.array, sizeof(s.array), 1, fileptr);

	//after writing data, we rewind the pointer to the beginning of the file, while it's opened.
	rewind(fileptr);

	/*Setting the pointer position on the variable we want to read. It's on s.b, because we have inserted array AFTER b, so setting to s.b
	**Means that we are moving the pointer to the last byte of s.b, and afterwards there's s.array bytes. THE INPUT ORDER MATTERS.*/
	fseek(fileptr, sizeof(s.b), SEEK_SET);

	//reading only the string while scanning the whole file.
	while (!feof(fileptr))
	{
		fread(ReadedString, sizeof(s.array), 1, fileptr);
	}

	printf("String readed from file: %s\n", ReadedString);

	fclose(fileptr);
	free(s.array);
	free(ReadedString);

   return 0;
}
