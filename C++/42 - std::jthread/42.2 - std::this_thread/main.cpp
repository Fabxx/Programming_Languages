/**
 * @file main.cpp
 * @author Fabxx
 * @brief std::this_thread is a namespace member that referres to the current thread where the function belongs to, 
 *        shares the same methods as std::jthread.
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

void func()
{
    //referres to thread1
    std::this_thread::get_id();
}

int main(void)
{
    //referres to main() thread.
    std::this_thread::get_id();
    
    std::jthread thread1(func);

    thread1.join();
    
}