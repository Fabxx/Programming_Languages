#ifndef F1E01628_B975_412F_AB52_65E96CBA321E
#define F1E01628_B975_412F_AB52_65E96CBA321E

extern void print(); //extern makes scope of print global.

/*THis is a function that will be putted in a .c file. The compiler will enable the linkage between cpp and .c files 
to be able to write hybrid code. THis function with extern "C" will be treated as C code. 
 If you want the prototypes in the .h file to refer to C symbol names, then they must have extern "C" 
 when being interpreted as C++, and they should not have extern "C" when being interpreted as C --
hence the #ifdef __cplusplus checking.*/

#ifdef __cplusplus
extern "C" {
    void function();
}
#endif
#endif /* F1E01628_B975_412F_AB52_65E96CBA321E */
