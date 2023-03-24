/**
 * @file main.c
 * @author Fabxx
 * @brief If we want to increment integer pointers, we first initialize them to a valid memory address
 *        then we can increemnt the memory address value. We first dereference the pointer with
 *       (*a), then we increase it by doing ++. since the increment operator takes
 *       priority over the dereferencing, and if we don't dereference first, we increase the 
 *       pointer POSITION instead of the actual value.
         
         NOTE though:
         ++*a would've done the right thing and is more efficient than 
         (*a)++ which unnecessarily has to return the old value stored at the address and 
         then increment it.
 * 
 *       the values in the pointer are in hexadecimal (0-9 A-F), in printf %d converts the hex value
 *       into decimal, in this case a reaches 0xa which is "10".
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *a = (int*)malloc(sizeof(int));

  for (size_t i = 0; i < 10; ++i) {
    /*(*a)++; in this case the pointer is dereferenced and the value is returned, then increased.
              that's working but it's not efficient, instead if we don't have to do comparisons 
              with the value itself, we can directly increase it without returning 
              (remind to you the ++i and i++ difference, where changing the increment operator
               order changes also the priority, so if we don't return the value of x with ++x we 
               CAN'T do comparisons on the value. In this case the comparison works because
               we are comparing the entire pointer with its value stored inside, which will
               become 0xa and that's what we're looking for. But if we are looking for the 
               explicit value that is not returned (aka 10) the comparison will never work
               
               The fist case can be useful only if we NEED the returned value before incrementing it
               to do something else.*/
    
    ++*a;
    
    if (*a == 0xa) {
        /*NOTE: when the compiler says "%d" expects "int" but argument is "int*", it means that
                we typed "a" without the pointer, but he is expecting it to be a pointer*/
        printf("%d\n", *a);
    }
  }
  free(a);
   return 0;
}
