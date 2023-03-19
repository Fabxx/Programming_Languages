#include <iostream>

using namespace std;

// NOTE: To run these programs, open terminal, go into the correct directory
// ex: C++/1 - Usage of Variables and printf/complex print statements with variables
// Run "g++ -o main main.cpp" and then "./main"

int main()
{
    int four = 4;
    int two = 2;

    // Addition
    cout << "Addition: ";
    int addAns = four + two;
    cout << addAns << endl;

    // Subtraction
    cout << "Subtraction: ";
    int subAns = four - two;
    cout << subAns << endl;

    // Division
    cout << "Division: ";
    int divAns = four / two;
    cout << divAns << endl;

    // Multiplication
    cout << "Multiplication: ";
    int multAns = four * two;
    cout << multAns << endl;

    // Modulo (remainder)
    cout << "Modulo: ";
    int modAns = 14 % 3;
    // 14 / 3 = 4 remainder 2, so the modulo is 2
    cout << modAns << endl;

    return 0;
}