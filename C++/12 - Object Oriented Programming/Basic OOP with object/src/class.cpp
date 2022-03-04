#include "class.h"
using namespace std;

//object declaration on first class, if we need to access members from other classes, the objects must be referred to the desitnation classes we want to reach. 
 test obj;

//NOTE: members AND variables of the same class don't need an object to be called. those can be called directly

void test::print1() {
    cout << "Printing" << endl;
}

void test::print2() {
  cout << "Printing again" << endl;
}


void test2::add() {

  //calling first class members with object based on it.
   obj.print1();
   obj.print2();
}
