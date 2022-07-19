#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED

/*Our function with parameters as pointers, to avoid redundant copy in memory, See the "pass by ref vs pass by value chapter for more info on why
  we use pointers.*/

int sum(int *a, int *b);
int subtraction(int *a, int *b);
int multiplication(int *a, int *b);
int division(int *a, int *b);
int power(int *a);
int cube(int *b);
int verify(int *a);


#endif // MATH_H_INCLUDED
