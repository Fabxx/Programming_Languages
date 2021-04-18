#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    // prints the numbers 10-1 (i.e. 10 numbers)
    cout << "Backwards iteration:" << endl;
    while (i != 0){
        cout << i << endl;
        i -= 1;
        // print. 
    }
    cout << "\n";

    i = 10;
    int num1 = 1;
    int num2 = 1;
    int total = 0;
    // prints the fibonacci sequence 
    // ex: 1, 1, 2, 3, 5, 8, 12, etc.
    cout << "Fibonacci Sequence:" << endl;
    cout << num1 << " ";
    cout << num2 << " ";
    while (i != 0){
        total = num1 + num2;
        cout << total << " ";

        num1 = num2;
        num2 = total;
        i -= 1;
    }
    cout << "\n";
} 
