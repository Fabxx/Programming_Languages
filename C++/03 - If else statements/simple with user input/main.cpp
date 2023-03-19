#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "Type a number (any integer) and then press enter: ";
    cin >> num;
    cout << "You typed the number: " << num << endl;

    // check if negative
    if (num < 0) {
        cout << "Your number is negative." << endl;
        if (num < -100)
            cout << "Your number is less than -100." << endl;
        else
            cout << "Your number is greater than -100." << endl;

    }
    // else we know it's positive
    else{
        cout << "Your number is positive." << endl;
        if (num > 100)
            cout << "Your number is greater than 100." << endl;
        else
            cout << "Your number is less than 100." << endl;
    }

    // check if it's even (% is modulo aka remainder)
    if (num % 2 == 0)
        cout << "Your number is even." << endl;
    else
        cout << "Your number is odd." << endl;

    return 0;
}