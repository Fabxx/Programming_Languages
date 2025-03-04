/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          A keyword used to remove CPU register update overhead when jumping between
          very small functions.

          Useful with small/very small functions which are not expensive at runtime,
          but they are when the CPU needs to jump from a stack to another very often.

          the function stack is moved into the main stack to avoid the jumps.

          inline can accept any types.

          NOTES:    
          
          - If misused the keyword can harm performance.
          - The compiler can ignore the request or might implicitly apply inline as a optimization.
          - Inline allows multiple funciton redefinitions without violating the One definition Rule.
            You can have the same defined function in different files without causing conflicts.


            The following functions are implicitly inline:

          - Functions defined inside a class, struct, or union type definition
          - Constexpr / consteval functions (NOT VARIABLES) (if a func cannot be constexpr, then you explicitly use inline)
          - Functions implicitly instantiated from function templates
          

          Use inline only when you are sure that the optimization is needed, and when defining the 
          function inside a header file. Can also be done in source files but the modern compilers
          might be able to understand that the optimization is needed.

          If you make all functions inline on header files it can have a performance impact
          on compilation, because each header and source file that includes these inline
          functions must be recompiled.
      
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 #include <iostream>

inline void print() 
{
    std::cout << "a very small function\n";
}

constexpr void print2() //implicitly inline
{

}

class myclass
{
  public:
    void func()
    {
      std::cout << "some inline stuff\n"; //already inline, defined in class
    }

    void func2(); // not inline, declared but not defined.
};

inline void myclass::func2()
{

}

 int main()
 {
      
 }
