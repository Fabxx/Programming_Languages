#include "class.h"
using namespace std;


//NOTE: members AND variables of the same class don't need an object to be called. those can be called directly

void test::print1() {
    cout << "Printing" << endl;
}

void test::print2() {
  cout << "Printing again" << endl;
}


void test2::add() {
 //object declaration on first class, if we need to access members from other classes, the objects must be referred to the desitnation classes we want to reach. 
 //objects must be local to the function where we need to use it, or else we get a multiple declaration error.
 test obj;
  //calling first class members with object based on it.
   obj.print1();
   obj.print2();
}
