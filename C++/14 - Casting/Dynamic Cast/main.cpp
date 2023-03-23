/**
 * @file main.cpp
 * @author Fabxx
 * @brief this cast type it's used to cast class object pointers at runtime, and verifies if the casting it's safe to be
 *        executed. If it fails returns NULL.
 * 
 *        There are two types of dynamic_casting:
 *        -Downcast: casting main class object to subclass
 *        -Upcasting: casting subclass object to main class.
 * 
 *        the object class to be casted must have in its class a "virtual" function to be overrided with the subclass.
 *        which means it must be polymorfic.
 * 
 *        NOTE: -A Dynamic_cast has runtime overhead because it checks object types at run time using “Run-Time Type Information“.
                
                -If there is a surety we will never cast to wrong object then always avoid dynamic_cast and use static_cast. because
                -Dynamic casting checks consistency at runtime; hence, it is slower than static cast.
 * @version 0.1
 * @date 2023-03-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>

class main1
{
    public:
        virtual void output()
        {
            std::cout << "Hello from main class function." << std::endl;
        }

        virtual void out() 
        {
            std::cout << "hello 2" << std::endl;
        }
};

class subclass : public main1
{
    public:
        void output() override
        {
            std::cout << "Hello form subclass function." << std::endl;
        }

        void out() override 
        {
            std::cout << "hi there" << std::endl;
        }
};

int main(void)
{
    /**
     **converting main1 class object into subclass object, as long there's a virtual function in the main1 class, which becomes polymorfic.
     **So now after conversion at runtime, it received the functions from "subclass", becoming a complete "subclass" type.
     */
    main1 *base_pointer = new subclass;
    subclass *derived_pointer = dynamic_cast<subclass*>(base_pointer);

    if (derived_pointer != NULL)
    {
        std::cout << "Casting was successfull" << std::endl;
        //if it worked, now the base class will have the subclass function.
        base_pointer->output();
        base_pointer->out();
    } else 
    {
        std::cout << "Casting failed" << std::endl;
    }

    return 0;
}