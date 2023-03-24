/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief similar to the previous one, but in this case multiple pointers can access to the 
 *        same object at any time since it's shared memory, keeping a reference counter
 *        that traces the pointers to the object.
 * 
 *      FUNCTIONS:
 *              -use_count() prints the number of times the pointer has been used.
 *              -unique: makes the pointer a unique_ptr type, which makes his object 
 *              not sharable (see 44.1)
 *              -owner_before: checks if the pointer precedes other in implementation defined owner-based (as opposed to value-based) order.
 *                             in short words, if the pointer has the same ownership as the other pointers, but it was applied to it
 *                             before the other pointers or not.
 *              std::make_shared makes the class object pointer share its resource, and can initialize
 *              other pointers to that same resource.
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <memory>

class A 
{
    public:
        void something();
};

void A::something()
{
    std::cout << "something shared" << std::endl;
}

int main(void)
{
    std::shared_ptr<A> pointer1 = std::make_shared<A>();
    //pointer 2 being initialized with A resource of pointer1.
    std::shared_ptr<A> pointer2(pointer1);

    pointer1->something();
    pointer2->something();

    std::cout << pointer2.use_count() << std::endl;

    return 0;
}