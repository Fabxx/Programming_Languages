/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief This program shows how can we access private members in a class.
 	  
	  NOTE: for private functions use the constructor (or other public functions)
	        to access them once defined.
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

class myclass {
     private:
      int a = 0, b = 0; //private members, we cannot access them directly

   public:

      void print() {
         cout << a << " \n" << b << " \n";
      }
      void function() { //our public object, which can access private members.
         a = 15, b = 16;

         cout << " \n" << a << " \n" << b;
      }

		   
 
};
int main() {

   myclass access;
   cout << "before: \n";
    access.print();
   //access.a = 15; Uncomment and you'll see you can't access to it. Only a class member can access private objects.
  cout << "After: \n";
   access.function();
   return 0;
}

    
