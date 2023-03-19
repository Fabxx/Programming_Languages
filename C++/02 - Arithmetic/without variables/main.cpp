#include <iostream>

using namespace std;

// NOTE: To run these programs, open terminal, go into the correct directory
// ex: C++/1 - Usage of Variables and printf/complex print statements with variables
// Run "g++ -o main main.cpp" and then "./main"

int main()
{
    // Addition
    cout << "Addition: ";
    cout << 4 + 2 << endl;

    // Subtraction
    cout << "Subtraction: ";
    cout << 4 - 2 << endl;

    // Division
    cout << "Division: ";
    cout << 4 / 2 << endl;

    // Multiplication
    cout << "Multiplication: ";
    cout << 4 * 2 << endl;

    // Modulo (remainder)
    cout << "Modulo: ";
    // 14 / 3 = 4 remainder 2, so the modulo is 2
    cout << 14 % 3 << endl;

    return 0;
}