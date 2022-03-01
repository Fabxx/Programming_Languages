#include "class.h"
using namespace std;

void test::print1() {
    cout << "Printing" << endl;
}

void test::print2() {
  cout << "Printing again" << endl;
}


void test2::add() {

  //calling first class members with object based on
  //first class constructor.
   test obj;
   obj.print1();
   obj.print2();
}