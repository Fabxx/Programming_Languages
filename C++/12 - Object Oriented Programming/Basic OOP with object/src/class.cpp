#include "class.h"
using namespace std;

/*
NOTE: members AND variables of the same class don't need an object to be called. those can be called directly when defining.
when calling inside ANY other function (class function or normal function), an object is required, like it happens in 
test2 class function, we are calling "test" functions, which is another class.
*/

void test::print1() {
    cout << "Printing" << endl;
}

void test::print2() {
  cout << "Printing again" << endl;
}


void test2::add() {
 //objects must be local to the function where we need to use it, or else we get a multiple declaration error.
 test obj;
   obj.print1();
   obj.print2();
}
