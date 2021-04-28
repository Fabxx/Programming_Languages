#include <iostream>

using namespace std;

/*
The following is main.cpp rearranged so that it follows bad coding practices.
If you haven't looked at main.cpp, do that first and then return.

Why this code is bad:
1. For starters, typically you never want "chained" functions, 
    i.e. a function that calls a function which calls another function
    When in doubt, all function calls should be made in MAIN.

2. Line 44 is bad because the function name indicates that it returns a tip, but 
    its return value is set to total. This is very confusing for a reader. A reader might 
    worry that function tipAmt is named wrong, or that the variable total is used wrong.

NOTE: Even if the code works how it's supposed to work, if it is written/structured 
incorrectly or in a confusing way then it is BAD CODE.
*/
double totalAmt(double price, double tip)
{
    return price + tip;
}

double tipAmt(double price)
{
    double tip = price * 0.18;
    cout << "Then you should tip at least $" << tip << endl;

    // THIS IS BAD PRACTICE!
    double total = totalAmt(price, tip);
    return total;
}

int main()
{
    double price;
    double total;
    cout << "How much was your dinner bill?" << endl;
    cin >> price;

    // THIS IS BAD PRACTICE!
    total = tipAmt(price);

    cout << "This will be a grand total of $" << total << endl;
    return 0;
}