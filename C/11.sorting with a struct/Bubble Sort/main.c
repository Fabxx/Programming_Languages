#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define SIZE 3

/*A simple program that orders structure elements with bubble sort algorithm, based on the number of the integer related to each
   element.*/
    typedef struct {

       int num;
       char name[MAX];
       char surname[MAX];
    } structure;

    structure str[SIZE]; //array for the structure
    
void input() {
	    
    int i;
       
           

               for (i = 0; i < SIZE; i++) { //acquiring input for n elements desired from the user.
                   printf("Insert the name\n");
                      fflush(stdin);
                      gets(str[i].name);
                       printf("Insert the surname\n");
                              fflush(stdin);
                           gets(str[i].surname);
                           printf("Insert the number for this element\n");
                             scanf("%d", &str[i].num);
       }
                          printf("Acquisition completed\n");
    }

void bubble_sort() {

      int i;
      structure tmp;
      int sorted;
      
	  
      sorted = 1; 
		
      for (i = 0; i < SIZE-1; i++) {
	  while(sorted == 0) {
		sorted = 1;
        if (str[i].num > str[i+1].num) { //if the number of the first element is major than the next one, we exchange them
	    tmp = str[i]; //the exchange is done with the structure array directly instead of exchanging each parameter of the label.
            str[i] = str[i+1];
            str[i+1] = tmp;
	 } //end of exchange.
   		sorted = 0;
    } //end of for cicle.
  
} //end of funciton.

 void print_sort() {

    int i;

    for (i = 0; i < SIZE; i++) {

        printf("Name:%s\n", str[i].name);
          printf("Surname:%s\n", str[i].surname);
            printf("Number:%d\n", str[i].num);

    }
 }

 int main(void) {
  
    input();
    bubble_sort();
    print_sort();
    system("pause");
    return 0;
}
