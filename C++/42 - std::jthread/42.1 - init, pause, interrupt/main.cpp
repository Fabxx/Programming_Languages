/**
 * @file main.cpp
 * @author Fabxx
 * @brief Available since C++ 20, std::jthread is the equivalent of std::thread, aside for two things:
 *        -std::thread's destructor would terminate the program if you didn't join or detach it manually beforehand. 
 *        -jthread fixes this: it joins on destruction by default. It also supports a mechanism to ask a thread to halt execution
 * 
 *      NOTE: use the flag -pthread on compile along the c++ 20 standard thread to compile with these threads.
 *           if the linkage fails.
 * 
 *      NOTE: if on vscode and the intellisense gives problems, add this to "settings.json":
 *            C_Cpp.default.cppStandard": "c++20"
 *          
*       FEATURES:
 *          -Each time we call a thread to join and we have multiple threads, the first thread is executed, then when it finishes
 *          the other gets executed (sequential join for each thread.join(), but only if we do basic joins.).
 * 
 *          -It is also possible to send an interrupt signal to the thread, in a function that has a std::token
 *          to send the signal.
 *          
 *          -It's possible to also pause a thread to avoid to reinitialize another thread to re-do execution, though in some cases
 *           might not be optimal considering the memory usage in a long term.
 * 
 *          -It's possible to make the threads asynchronous, where one thread doesn't depend from the end of execution of previous one
 * 
 *          -It's possible to share memory data between threads and shared pointers.
 *          
 *     PROBLEMS:
 *           -Deadlock for a thread can happen (never receiving its resource to work)
 *           -Race condition between threads to access a resource can happen.
 *           -If the threads are asynchronous, can also happen that a thread won't get executed if main() finishes
 *            or that they will try to access simoultaneously a resource.
 * 
 *    FIXES:
 *          -using mutexes to avoid deadlocks and race conditions (std::mutex).
 * 
 *          Functions for a thread:
 * 
 *          Member functions

(constructor)
    Construct thread (public member function)

(destructor)
    Thread destructor (public member function)

operator =
    Move-assign thread (public member function)

get_id
    Get thread id (public member function)

joinable
    Check if joinable (public member function)

join
    Join thread (public member function)

detach
    Detach thread (public member function)

swap
    Swap threads (public member function)

native_handle
    Get native handle (public member function)

hardware_concurrency [static]
    Detect hardware concurrency (public static member function)


NOTE: using join on a thread, blocks waiting for the ‘joined’ thread to terminate. 
      Useful if we want threads to join ONLY One after the other.

      using detach() means that the ‘detached’ thread will be independant and doesn’t need 
      to terminate if we want to execute other threads. Practices to handle them are seen ahead
      in the chapters. 
      
      And because of this, YOU NEED
      TO IMPLEMENT a wait time for the main thread if others are detached, so that the main thread won't finish
      before the other threads haven't finished. To do so, you can either:

      -calculate the execution time of a thread with std::chrono, and make the main thread wait for the estimated execution time.

      -Create a main loop where the threads get enabled only by a specific condition, calculate the execution time for each thread,
      
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <thread>


//interrupt with token, receiving signal.
void stop_thread(std::stop_token token)
{
    std::cout << "printing before stop" << std::endl;
    if (token.stop_requested()) {
        return;
    }

    std::cout << "thread not stopped" << std::endl;
}

//We can make a new thread to run free to become a child process.
void detached_thread()
{
    std::cout << "Printing with child thread" << std::endl;
}

//we can pause a thread with the use of chrono members:

void pause_thread()
{
    std::this_thread::sleep_for(std::chrono::seconds(2));
}
  
int main(void)
{
   std::stop_token token;
   std::jthread stop_exec(stop_thread, token);
   std::jthread child_thread(detached_thread);
   std::jthread thread_paused(paused_thread);

    //call the first thread.
    stop_exec.join();

    /*ask to stop the thread to interrupt its execution. 
    NOTE: this MUST be done after the join if you want the function to stop at a specific point*/
    stop_exec.request_stop();
    
    /*detach thread for independent execution (becomes child process).
      NOTE: this detach is ASYNCRONOUS, which recalls the problem mentioned above.
            Also, once detached, if you want it to re-join the main thread, check if it's joinable.

      NOTE 2: even if the thread finishes its execution, it MUST Be stopped or the child thread remains detached
              but inactive and can't be reused, leading to a std::system exception when trying to detach again.
    */
    child_thread.detach();

    if (child_thread.joinable()) {
        child_thread.join();
    }

    thread_paused.join();
    
    return 0;
}
