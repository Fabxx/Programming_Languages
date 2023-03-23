/**
 * @file main.cpp
 * @author Fabxx
 * @brief this allows us to obtain the max number of threads avaialble on the system.
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <thread>

void get_thread_num()
{
  std::cout << "threads available: " << std::jthread::hardware_concurrency() << std::endl;
}

int main(void)
{
    std::jthread thread1(get_thread_num);
    thread1.join();
    return 0;
}