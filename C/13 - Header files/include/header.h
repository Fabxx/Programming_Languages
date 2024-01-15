#ifndef C86F6563_6541_4697_87CE_61977F80DAC9
#define C86F6563_6541_4697_87CE_61977F80DAC9

 //needed only if we write functions standard C instructions
#include <stdio.h>

void function(); //declaration only, will be linked to header.c

static inline void func() { //declaration and definition, will be linked where it's used.
    printf("do something\n");
}

#endif /* C86F6563_6541_4697_87CE_61977F80DAC9 */
