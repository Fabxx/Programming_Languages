#include <iostream>

using namespace std;

int numShoes()
{
    return 6;
}

int main()
{
    // you can call a function to retrieve a value
    int num = numShoes();
    // Prints "Bobby has 6 pairs of shoes."
    cout << "Bobby has " << num << " pairs of shoes." << endl;
    return 0;
}