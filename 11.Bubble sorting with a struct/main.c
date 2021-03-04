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
                      gets(str[i].name);

                       printf("Insert the surname\n");
                           gets(str[i].surname);


                           printf("Insert the number for this element\n");
                             scanf("%d", &str[i].num);


       }


                          printf("Acquisition completed\n");

    }





    void bubble_sort() {

      int i;

      int p = num_elem; //p used to get the number of elements to get the position of them.

      structure tmp;

       for (i = 0; i < p-1; i++) {


        if (str[i].num > str[i+1].num) { //if the number of the first element is major than the next one, we exchange them


            tmp = str[i]; //the exchange is done with the structure array directly instead of exchanging each parameter of the label.

            str[i] = str[i+1];

            str[i+1] = tmp;


        } //end of exchange.

             p -= 1; //after the exchange we decrease the position of the elements which has been exchanged.

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
    
    setvbuf(stdout, NULL, _IONBF, 0); //cleaning the buffer for i/o operations with gets.

    input();

    bubble_sort();

    print_sort();


    system("pause");

    return 0;
}
