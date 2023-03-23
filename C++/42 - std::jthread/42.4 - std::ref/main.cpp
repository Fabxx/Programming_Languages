/**
 * @file main.cpp
 * @author std::ref it's basically pass by reference, but instead of making variables as pointers explicitly
 *         we can use the function defined in the namespace "std"
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <thread>

/*making the string "s" a temporary pointer to reference the value. DO NOT make it an actual pointer
  because std::ref does not take pointers as arguments, but only normal variables that will be already 
  converted by it */
void func(std::string &s)
{
    s = "my string that will be referenced";
}

int main(void)
{
    std::string s = "a string";

    std::cout << "String before edit by thread: " << s << std::endl;
    std::jthread thread1(func, std::ref(s));
    thread1.join();

    std::cout << "String after edit by thread: " << s << std::endl;

    return 0;
}