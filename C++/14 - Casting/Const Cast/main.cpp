/**
 * @file main.cpp
 * @author Fabxx
 * @brief const_cast can allow to modify variables via const functions. Tihs example is with a class, but can also be applied in other context.
 *        can also be used on volatile types of variable
 * @version 0.1
 * @date 2023-03-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

class myclass
{
    public:
        int a;
        void change_a() const;
};

void myclass::change_a() const
{
    /*if the function is const, it cannot access to variables to edit them. we have to convert the class object "this"
      to temporarily remove the const qualifier to be able to edit the variable.

       this->a = 10; is NOT accepted.
    */
    
    //converting class object pointer "this", which belongs to "myclass *".
    const_cast<myclass *>(this)->a = 10;
}

/*can be used to pass const data to a function that doesn’t receive const

NOTE: it's undefined behavior modyfing values that initially were const.
      if "pass_ptr" has the const value 10, and then with "func" we try to edit it by 
      doing another assignation, it might cause some problems on the data type storage, 
      because from const data we are giving again normal data.
      
      So:
        int *func(int *a)
        {
            //This is reinitializing the pointer we are passing as an argument, which leads to the behavior mentioned before.
            *a = 10; 
            return (a + 1);
        }
      */

int *func(int *a)
{
    return (a + 1);
}

int main(void)
{
    //giving normal pointer the const pointer data, by removing const type on "a".
    const int a = 10;
    int *pass_ptr = const_cast<int*>(&a);

    //will print 11, which is 10 from the const pointer, stored in a normal pointer + 1.
    std::cout << func(pass_ptr) << std::endl;

    return 0;
}