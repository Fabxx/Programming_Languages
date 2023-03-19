#include <iostream>

using namespace std;

int main()
{
    // chained if statements vs. if-else block
    int num = 16;

    // Chained if statements
    // The first 3 will print
    cout << "Chained if statements results" << endl;
    if(num > 5)
        cout << "Greater than 5." << endl;
    if (num > 10)
        cout << "Greater than 10." << endl;
    if (num > 15)
        cout << "Greater than 15." << endl;
    if (num > 20)
        cout << "Greater than 20." << endl;

    // if-else statement block
    // Only the first will print 
    // Once a statement is satisfied within an if-else block, the code leaves the block
    cout << "If-else block results" << endl;
    if(num > 5)
        cout << "Greater than 5." << endl;
    else if (num > 10)
        cout << "Greater than 10." << endl;
    else if (num > 15)
        cout << "Greater than 15." << endl;
    else if (num > 20)
        cout << "Greater than 20." << endl;

    return 0;
}