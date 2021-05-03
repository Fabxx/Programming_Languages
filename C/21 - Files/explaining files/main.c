/*A program that shows a file creation where we store our data*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;

   //we declare a pointer to our file, with FILE type.
   FILE *fptr;

   //fptr will be equal to the fopen function, first we put the name with extension
   //then we put the mode of the file (read only, write, both of them ecc).
   fptr = fopen("program.txt","w");

   //if we try to open the file, and the pointer returns NULLL which means he can't find
   //the file, the program will exit. In this case the read mode creates the file by itself
   //but never hurts to check.

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter num: ");
   scanf("%d",&num);

   /*fprintf it's used to print the stuff in the actual file, without doing a video
     output, then after we open our file, the data will be stored in there
     we pass the file pointer as an argument so we will point to the actual file
     what we want to put into it. then fclose will close the file and we won't read/write
     in it anymore until we recall it.*/

   fprintf(fptr,"Number captured:%d\n",num);
   fclose(fptr);

   return 0;
}
