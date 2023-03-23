/**
 * @file main.cpp
 * @author std::move is a function that allows you to move the data of a parameter inside the child thread
 *         process, without sharing memory between the threads.
 * 
 *         In this case "mystring" is the argument that will pass the data to "string" in main(), but then
 *         that data is moved outside the main thread and goes inside func() which is handled by "mythread"
 * 
 * 
 *         we CANNOT assign a thread to the other, but we can move the ownership of it.
 * @brief 
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <thread>

void func(std::string mystring)
{
    mystring = "a";
    std::cout << mystring << std::endl;
}

void nullfunc()
{

}

int main(void)
{
    std::string string;
    std::jthread mythread(func, std::move(string));
    
    mythread.join();

    //will be empty since data is moved inside the thread.
    std::cout << string << std::endl;

    //moving thread ownership, where thread2 takes the function of thread1:
    std::jthread thread1(nullfunc);
    std::jthread thread2 = std::move(thread1);
}