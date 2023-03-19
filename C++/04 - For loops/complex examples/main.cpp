#include <iostream>

using namespace std;

int main()
{
    // backwards iteration
    // prints the numbers 10-1 (i.e. 10 numbers)
    cout << "Rocket Launch:"  << endl;
    for (int i = 10; i > 0; i--){
        cout << i << endl;
    }
    cout << "Blast off!\n" << endl;

    // every other number
    // prints every other number 0-10(i.e. 5 numbers)
    cout << "Even numbers:" << endl;
    for (int i = 0; i < 10; i+=2){
        cout << i << endl;
    }
    cout << "\n";

    // every other number backwards
    // prints every other number 10-0(i.e. 5 numbers)
    cout << "Even numbers:" << endl;
    for (int i = 10; i > 0; i-=2){
        cout << i << endl;
    }
}