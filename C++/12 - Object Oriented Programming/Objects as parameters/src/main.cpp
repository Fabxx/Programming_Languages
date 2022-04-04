#include <iostream>
using namespace std;
#include "class.h"

int main(){

    /*here we redeclare the objects as pointers and use them as parameters again. This time for the other class it 
     is necessary another object based on B, because we need to access a funciton in B.
     DO not use the objects as pointers or else you'll get a segfault.*/
    
    A grab;
    B grab2;
    grab.in();
    grab2.out(grab);
    return 0;
}
