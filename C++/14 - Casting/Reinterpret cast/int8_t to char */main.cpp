#include <iostream>
using namespace std;

int main()
{
    int8_t a = 90;
    cout << reinterpret_cast<char*>(&a) << endl;
}