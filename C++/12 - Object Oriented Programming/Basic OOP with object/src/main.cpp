/**
 * @file main.cpp
 * @author -_< 
 * @brief SHowing basic OOP, when using an object to call class members, we create a copy of those members
 *        in memory into a new buffer, so the static keyword won't be needed to reference member classes
 *        and OOP won't be lost.
 
         NOTE: just like structs we can make array of objects if we initialize them like this:
               test2 *obj = new test2[5];
               and each object will have a copy of its class in the heap.
 * @version 0.1
 * @date 2022-03-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
#include "class.h"

int main() {
    test2 obj2; //calling here the object for test2 class to reach it's members.
    obj2.add();
    return 0;
}   
