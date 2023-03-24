#include <iostream>
#include "header.hh"

//extern function definition. Now this can be called in another file as well..
void a()
{
    std::cout << "print something" << std::endl;
}

int main(void)
{
    void a();
}