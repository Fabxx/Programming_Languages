#include<iostream>
using namespace std;

// Global variable can be used in any function
// Per good coding practices, variable names are all capitalized.
int X = 10;

void add15() {
    int y = 15;
    X = X + y;
}

void sub3() {
    int y = 3;
    X = X - 3;
}

int main() {
    cout << "Value of X, from main: " << X << endl;

    add15();
    // should be 25
    cout << "Value of X, after add15: " << X << endl;

    sub3();
    // should be 22
    cout << "Value of X, after sub3: " << X << endl;

    return 0;
}

// SUMMARY:
// X is a global variable so it can be used anywhere
// y is a local variable, so it can only be used in the function it is declared.
// This is why y is declared both on 9 and 14. Without declaring y on one of these lines,
// there would be an access error.