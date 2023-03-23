/**
 * @file main.cpp
 * @author Fabxx
 * @brief std::mutex allows to synchronize the main thread with the other threads to avoid a race condition.
 *        what we do is to create a shared function (aka resource), we put a mutex in that function so it locks the 
 *        resource on the current active thread, then after doing the code, we unlock it, and let the main thread access
 *       the resource.
 * 
 *       We will look how to handle the data written by multiple threads.
 * 
 *      FUNCTIONS: lock() : locks a resource to the currently attached thread
 *                 unlock(): unlocks the resource for future accesses.
 *                try_lock(): tries to lock the resouce and checks if it's not locked already.
 *                            This function is allowed to fail spuriously and return false even if the mutex 
 *                            is not currently locked by any other thread.
                              If try_lock is called by a thread that already owns the mutex, the behavior is undefined. 
 *  
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <thread>
#include <mutex>

std::mutex thread_mutex;

void shared_resource(std::string string)
{
    //thread_mutex.lock();
    if (thread_mutex.try_lock()) {
        std::cout << string << "thread ID: " << std::this_thread::get_id() << std::endl;
        thread_mutex.unlock();
    } else { //if resource is already locked it will print this message
        std::cout << "Resource might be already in use by Thread ID:" << std::this_thread::get_id() << std::endl;
    }
    
}

//calling resource via function, can also be done via thread itself.
void thread_function()
{
    for (size_t i = 0; i < 10; ++i) {
        shared_resource("hello from ");
    }
}

int main(void)
{
    std::jthread thread1(thread_function);
    thread1.detach();

    for (size_t i = 0; i < 10; ++i) {
        shared_resource("Hello from ");
    }
    return 0;
}