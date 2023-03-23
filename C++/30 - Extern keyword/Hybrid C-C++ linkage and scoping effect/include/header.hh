#ifndef F1E01628_B975_412F_AB52_65E96CBA321E
#define F1E01628_B975_412F_AB52_65E96CBA321E

/*
**extern makes scope of this function global to all the files and tells the compiler this function is declared somewhere, 
**you need then to declare this in a source without the extern keyword, so that you can recall this function in other source files
**You can do this by defining this function as extern in a source file and then declaring it, and calling it via another source file,
**without the need to do #include to call this.
*/
extern void print(); 

/*This is a function that will be put in a .c file. The compiler will enable the linkage between cpp and .c files 
to be able to write hybrid code. This function with extern "C" will be treated as C code. 
 If you want the prototypes in the .hh file to refer to C symbol names, then they must have extern "C". 
 when being interpreted as C++, they should not have extern "C", but only when being interpreted as C --
hence the #ifdef __cplusplus checking.*/

#ifdef __cplusplus
extern "C" {
    void function();
}
#endif
#endif /* F1E01628_B975_412F_AB52_65E96CBA321E */
