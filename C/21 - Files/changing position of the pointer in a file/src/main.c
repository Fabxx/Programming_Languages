/*An example of changing the pointer position into the struct. Each struct it's like a memory block, each block in the file contains the 
  variables of the struct in the file. In this example each structure is composed by 3 lines. We want to edit directly the b variable. 
  to do this, we rewind the pointer of the file at the beginning, and then with fseek function, we tell to set the pointer, starting from
  the first sizeof(structure) which is our first memory block, and we tell that we want to skip the array of chars and go directly to b
  variable, then, we edit the b variable in the file. If we want to skip a memory block of a structure, we have to put a integer to
  multiply it with the sizeof, so it will be like sizeof(structure) * choice from user/any integer you want to put:
  fseek(fileptr, sizeof(structure) * 2 + POSIZIONE_B, SEEK_SET); here we're saying, go to the second memory block, to the B variable.*/

#include "../include/struct.h"

int main () {

	structure s;
	FILE *fileptr;
	fileptr = fopen("file.txt", "w+b");

	if (fileptr == NULL)
	{
		exit(1);
	}
	
		puts("Inserisci b\n");
		scanf("%d", &s.b);
		fwrite(&s.b, sizeof(int), 1, fileptr);
	
			 rewind(fileptr);

			 fseek(fileptr, sizeof(structure) + POSIZIONE_B, SEEK_SET);
			 scanf("%d", &s.b);
			 fwrite(&s.b, sizeof(int), 1, fileptr);

			 printf("structure :>> %d\n", sizeof(structure));

			 fclose(fileptr);

   return EXIT_SUCCESS;
}
