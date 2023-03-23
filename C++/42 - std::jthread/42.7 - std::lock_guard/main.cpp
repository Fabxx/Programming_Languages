/**
 * @file main.cpp
 * @author Fabxx
 * @brief There might be cases where a resource is locked, but then a thread exits or an exception makes the thread not use that resource
 *         anymore, but that will result permanently locked, to fix this we use the try_lock method.
 * 
 *         which implements that RAII (resource acquisition is initialization) idiom for a mutex. It locks the supplied mutex on construction 
 *         and unlocks it on destruction, thus ensuring a locked mutex is always correctly unlocked. 
 * 
 *         This also avoids a possible deadlock imposed by the mutex while waiting for the resource to be free, and if it remains locked
 *         the deadlock will happen.
 * 
 *         it is always recommended to use a guard over a mutex to avoid the situation above, instead of the manual setup "lock/unlock"
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

void func(std::chrono::duration<double, std::milli> &wait_time)
{
     const auto start = std::chrono::high_resolution_clock::now();
    std::mutex my_mutex;
    std::lock_guard<std::mutex> guard_mutex(my_mutex);
    std::vector<int> vector1;

    //each sequence since the mutex is guarded will be from 0 to 99 without race conditions applying unordered values from other threads.
    //and if a thread is forced to exit, the mutex will be unlocked.
    for (size_t i = 0; i < 100; ++i){
        vector1.push_back(i);
        std::cout << vector1[i] << std::endl;
    }

    std::cout << "Printing with thread ID: " << std::this_thread::get_id() << std::endl;

    const auto end = std::chrono::high_resolution_clock::now();
    wait_time = end - start;
}


int main(void)
{
    std::chrono::duration<double, std::milli> wait_time;
    std::jthread thread1(func, std::ref(wait_time)), thread2(func, std::ref(wait_time));

    /*in this case thread2 is in deadlock until thread1 finishes, because it's trying to access the same
      resource of thread1 while in use, and the lock_guard with the mutex does not permit that.
      Of course this is a design issue, since we are wasting a thread which can be used for other things.
      
      NOTE: using "join" in jthreads won't cause a race condition because there is automatic handling and wait
      for a resource to be used and freed AFTER the first thread exits as mentioned in 42.1, that's why the example is made with "detach"
      where the threads don't care about each other.*/
    thread1.detach();
    thread2.detach();
    //make main thread not finish BEFORE threads have finished.
    std::this_thread::sleep_for(wait_time);

    return 0;
}