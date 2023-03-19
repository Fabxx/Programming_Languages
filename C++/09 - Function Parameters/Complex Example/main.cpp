#include<iostream>
using namespace std;

void passByVal(int x) {
    x = 33;
    cout << "Value of x from passByVal: " << x << endl;
}

// adding the ampersand in front of the variable makes it pass by reference
// pass by reference essentially means passing the actual variable rather
// than just the VALUE of the variable. 
void passByRef(int &x) {
    x = 33;
    cout << "Value of x from passByRef: " << x << endl;
}

int main() {
    int x = 10;
    cout << "Value of x from main: " << x << endl;

    passByVal(x);
    // will still be 10
    cout << "Value of x, after passByVal " << x << endl;

    passByRef(x);
    // will now be 33
    cout << "Value of x, after passByRef " << x << endl;

    return 0;
}

// SUMMARY:
// when you pass by ref, you can modify the original value.
// when you pass by value, you only can read the original value.