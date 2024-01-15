/*Three types of loops:

    for
    while
    do-while

    THey all repeat instructions based on specific conditions.

    We can use two keywords in loops:

    continue: skips the current loop and goes into the next one until condition is met.

    break: breaks the loop when a specific condition is reached
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
     int val = 0, val2 = 0;

    for (size_t i = 0; i < 5; i++) {
        if (i < 4) {
            continue;
        }
        printf("Printing Directly number: %ld\n", i);
    }
    
    
    while (val < 5) {
        if (val == 4) {
            break;
        }
        printf("Printing value: %d\n", val);
        val++;
    }

    do {
        printf("0x%d\n", val2);
        val2++;
    } while (val2 < 10);


    // Input loop, can store 1 number in each position.

    int numbers[4][1] = {};

    // i < 3 because memory starts from 0. So we have 0, 1, 2 positions for numbers. So index must be SIZE OF ARRAY-1

    for (size_t i = 0; i < 3; i++){
        scanf("%d", &numbers[i][i]);
        printf("%d\n", numbers[i][i]);
    }
    

    return 0;
}
