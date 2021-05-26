#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/*A simple program that orders structure elements with bubble sort algorithm, based on the number of the integer related to each
   element.*/
    typedef struct {

       int num;
       char name[100];
       char surname[100];
    } structure;

    structure str[MAX]; //array for the structure
      int num_elem; //number of elements where  we will acquire the information.

    void input() {

             int i;
       
           printf("Insert the number of elements where you want to acquire data.\n");
            scanf("%d", &num_elem);

               for (i = 0; i < num_elem; i++) { //acquiring input for n elements desired from the user.
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

    void selection_sort() {

      int i = 0, j = 0;

      structure tmp;

       for (i = 0; i < i-1; i++) {
          for (j = i+1; j < i; j++) {
             
        if (str[i].num > str[j].num) { //if the number of the first element is major than the next one, we exchange them
           
            tmp = str[i]; //the exchange is done with the structure array directly instead of exchanging each parameter of the label.
            str[i] = str[j];
            str[j] = tmp;
        } //end of exchange.
     }
  
   } //end of for cicle.

} //end of funciton.

 void print_sort() {

    int i;

    for (i = 0; i < num_elem; i++) {

        printf("Name:%s\n", str[i].name);
          printf("Surname:%s\n", str[i].surname);
            printf("Number:%d\n", str[i].num);

    }
 }

 int main(void) {
  
    input();
    selection_sort();
    print_sort();
    system("pause");
    return 0;
}
