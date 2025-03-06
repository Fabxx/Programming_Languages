/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          std::exit() does not clean the buffer, so before calling it you must deallocate
          everything you have used.

          you can use std::atexit() which on exit will call your cleanup function before exiting.

          this is called implicitly when main returns
          
          std::abort and std::terminate don't do any cleanup as well as std::exit

          NOTE:
               If on multi threading, use std::at_quick_exit() in order to clean safely static objects that might be 
               accessed by other threads.

               ONLY use halting when there is no safe way to return from main, preferr exceptions for error handling.

               So this is a very nitpicky feature that you might not want to use unless really necessary.


 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <cstdlib>
#include <iostream>

void cleanup()
{
   std::cout << "cleanup complete\n";
}

 int main()
 {
   std::atexit(cleanup); // the function being registered must take no parameters and have no return value. 

   std::cout << "done\n";

   std::exit(0); // once memory has been deallocated, you can safely exit. Code written after won't execute
 }
