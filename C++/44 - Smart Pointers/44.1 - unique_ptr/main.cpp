/**
 * @file main.cpp
 * @author Fabxx
 * @brief unique_ptr stores one pointer only. We can assign a different object by removing the current 
 *        object from the pointer. 
 * 
 *        FEATURES:
 *              The object is disposed of, using the associated deleter when either of the following happens:
                -the managing unique_ptr object is destroyed
                -the managing unique_ptr object is assigned another pointer via operator= or reset(). 
                -The object is disposed of, using a potentially user-supplied deleter by calling get_deleter()(ptr).
                  the default deleter uses the "delete" operator, which destroys the object and deallocates the memory.

            There are two versions of std::unique_ptr:

            -Manages a single object (e.g. allocated with new)
            -Manages a dynamically-allocated array of objects (e.g. allocated with new[])  

            NOTES:
                Only non-const unique_ptr can transfer the ownership of the managed object to another unique_ptr. 
                If an object's lifetime is managed by a const std::unique_ptr, it is limited to the scope in which the pointer was created. 
 
            FUNCTIONS:
                Member functions
                    (constructor)
                        constructs a new unique_ptr
                    (public member function)

                    (destructor)
                        destructs the managed object if such is present
                    (public member function)
                    
                    operator=
                        assigns the unique_ptr
                    (public member function)
                    
                    MODIFIERS:
                    release
                        returns a pointer to the managed object and releases the ownership
                    (public member function)

                    reset
                        replaces the managed object
                    (public member function)

                    swap
                        swaps the managed objects
                    (public member function)

                    OBSERVERS:
                    get
                        returns a pointer to the managed object
                    (public member function)

                    get_deleter
                        returns the deleter that is used for destruction of the managed object
                    (public member function)

                    operator bool
                        checks if there is an associated managed object
                    (public member function)

                    Single-object version, unique_ptr<T>
                    operator*operator->
                        dereferences pointer to the managed object
                    (public member function)

                    Array version, unique_ptr<T[]>
                    operator[]
                        provides indexed access to the managed array
                    (public member function)
 
 
 
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
        void print();
};

void A::print()
{
    std::cout << "printing via pointer" << std::endl;
}

int main(void)
{
    //initialize the pointer to A memory area
    std::unique_ptr<A> pointer(new A()), pointer2;
    //dynamic allocation for array of objects.
    std::unique_ptr<A> dynamic_pointer(new A[2]);

    pointer->print();

    /*release object so pointer2 can access it (if still in use pointer2 will give error).
      it won't happen in this case, but with detached threads can happen*/
    pointer.release();

    //alternatively can transfer ownership with std::move.
    //pointer2 = std::move(pointer);

    pointer2->print();
    dynamic_pointer->print();
}