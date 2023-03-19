#include<stdio.h>

//basic example of if statement

int main()
{
   int a = 0;

   if (a < 10) {
       a++
   } else if (a > 10) { //in this case if no other conditions are needed after the first if, we can simply write "else" instead of "else if"
	   printf("a has reached 10\n");
   }
	
   /*NOTE: In some cases you don't need to put the else, because then you're forcing it to enter the block that will do ONLY the instructions in that
	   else block, and some instructions might be redundant to rewrite. If you need the same instruction for different cases, just do this.
	NOTE 2: This example is made with files, to understand how files work, go to chapter 20 - FILES.*/
	
	FILE *ptr;
	ptr = fopen("file.txt", "r+");

	/*wrong unnecessary case where the write  instruction will happen anyways, and it's redundant. The only difference is that in one case we are creating 
	  the file if not found, the other case is when we already find the file and we directly write on it*/
	if (ptr == NULL) {
		ptr = fopen("file.txt", "w+");
		fwrite("this", sizeof(char)*5, 1, ptr);
		fclose(ptr);
	} else {
		fwrite("this", sizeof(char)*5, 1, ptr);
		fclose(ptr);
	}

	//instead, we can simplify like this:
	FILE *ptr2;
	ptr2 = fopen("file.txt", "r+");

	if (ptr2 == NULL) {
		//create the file only if not found, then afterwards write on it and close.
		ptr2 = fopen("file.txt", "w+");
	}
	fwrite("this", sizeof(char)*5, 1, ptr);
	fclose(ptr2);
}
