/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief This program shows how we can operate on class variable with a constant function.
 * 		  a constant function shouldn't be able to edit a variable because, like the name 
 * 		  suggests, a value operated by a constant function can't be changed. To be 
 * 		  able to do so, we create a mutable variable to pass to the constant function, so the
 *               constant function used to access the class can still edit it's objects. We're trying
 * 		to edit an integer with a constant access to the class. Note that this requires a constructor,
 	        which means that the class itself must operate on the class values, then we use the constructor
		as a constant.
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

class myclass {
   public:
      int a;
   	  mutable int b;

		   myclass(int x, int y) { //class constructor, required by the constant to operate.
			 x = 3, y = 15;
			 a = x;
			 b = y;
		 }
};
int main() {
   const myclass access(3, 7); //the two integers in the constructor parameters.
	
   cout << "First access:\n";
   cout<<access.a<<" "<<access.b<<"\n";
	
    //access.a=30; //Error occurs because a can not be changed, because object is constant.
   access.b=100; //b still can be changed, because b is mutable, despite we're using a const access. 
  
   cout << "Second Access:\n";
   cout<<access.a<<" "<<access.b<<"\n";
   return 0;
}

    
