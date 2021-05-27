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