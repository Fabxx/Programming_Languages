/* Password checker, this is just a little showcase of the ctype.h functions, not a real password checker. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 3 //array size

int main() { //main function.

        int i;

        int is_upper = 0; //variables used to sum the value of the isupper/digit functions
        int is_digit = 0;

        unsigned char word[SIZE];

            printf("Insert Password\n");
            scanf("%s", word);

            if (strlen(word) <= SIZE) { /*if the lenght of the word scannes is lower/equal to the array size.*/

                for (i = 0; i < SIZE; i++) { //must check limit on constant size, not strlen limit. or else it will crash.

                   /*We sum the values for each position of the characters on isupper/digit functions as parameters*/

                    is_upper = is_upper + isupper(word[i]);
                    is_digit = is_digit + isdigit(word[i]);


                    if (is_upper == 1 && is_digit == 1) {

                        i = SIZE; //we force the exit from the cicle by setting the index to the array size.
                                  //when a digit and a upper word is detected, so we don't check everytime in the whozle array.
                    }
            }
        }
                       if (is_upper == 1 && is_digit == 1) {

                                puts("Password is valid.\n");
                                puts(word);
                       } else {
                        puts("Password not valid.\n");
        }
}
