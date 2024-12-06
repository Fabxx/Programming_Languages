/*
   Showing how to:

   -CHeck if a file exists
   -Create/open a file with specific modes.
   -Writing to file
   -Reading from file
   -Moving into file towards specific variable
   -Appending data

   Permission list:

   r : read only

   w : write only

   rw : read-write

   rb : read in binary mode

   wb : write in binary mode

   r+ : read/write to file without deleting content or creating a new file if it doesn't exist

   w+ : read/write to file by creating a new one if it doesn't exist, or delete the content of file if already exists.

   a : append data to file, adds new data to the previously written data.

   In this case we create a normal struct, we define a pointer object on it and we use it to write into a file.
   you can do this with a normal object as well without using pointers.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int a; //ints are pre-allocated size vars. 4 bytes in this case.
    int b;
    char *string; //string is a pointer, so instead of having 1 byte of char, it is 0 until allocated.
} data;

void GetStructData(data *ptr) {
    char *str = NULL;
    scanf("%m[^\n]%*c", &str);
    ptr->string = str;
    ptr->a = 10, ptr->b = 20;
}

int main(void)
{
  FILE *myfile;
  data obj;

  myfile = fopen("name.txt", "r+");
    
    if (myfile != NULL) {
        /*If using sizeof(data) instead, we can only read the 8 bytes of ints, the string is 0 when program runs so even if the string
          is in the file, we won't be able to read it. sizeof(myfile) takes account of the previously written string bytes instead.*/
       fread(&obj, sizeof(myfile), 1, myfile);
       printf("File content: %d\t%d\t%s\n", obj.a, obj.b, obj.string);
    } else {
        myfile = fopen("name.txt", "w+");
        GetStructData(&obj);
        //write whole struct, hence why sizeof(data)
        fwrite(&obj, sizeof(data), 1, myfile);
        fclose(myfile);
        //append data and write string only from struct.
         myfile = fopen("name.txt", "a");
         fwrite(&obj.string, sizeof(obj.string), 1, myfile);
         free(obj.string);
    }

    //moves pointer of file into beginning of obj.b bytes, can use to read/overwrite specific variable.
    fseek(myfile, sizeof(obj.a), SEEK_SET);
    
    //tells the position of the pointer. will print 4 because one int is 4 bytes and skips 0-3. (if 32 bit by default)
    printf("%ld\n", ftell(myfile));
    
    //moves file pointer back to 0.
    rewind(myfile);
    printf("%ld\n", ftell(myfile));
    
    fclose(myfile);

    return 0;
}
