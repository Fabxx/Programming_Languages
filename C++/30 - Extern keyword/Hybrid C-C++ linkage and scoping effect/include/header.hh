#ifndef F1E01628_B975_412F_AB52_65E96CBA321E
#define F1E01628_B975_412F_AB52_65E96CBA321E

/*
**extern makes scope of this function global to all the files that include the header where it's declared and tells the compiler this 
function is declared somewhere. 

In short words:

-declare a function as extern in a header.
-define the extern function in a source, without the extern keyword already, and including the header.
-That definition now becomes available for all the source files that include the header.
*/
extern void print(); 

/*A macro that allows us to create functions that will be compiled with C symbols in .c files 
 (or functions in .c files that will be called in .cpp files, NOT viceversa. for that you need another macro.), to allow hybrid code by 
  enabling the linkage between .c and .cpp files.
  
  here is an example of __cplusplus macro usage, this function goes in file.c and will be called in main.cpp*/

#ifdef __cplusplus
extern "C" {
    void function();
}
#endif
#endif /* F1E01628_B975_412F_AB52_65E96CBA321E */
