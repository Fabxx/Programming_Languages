#include <iostream>
#include <iomanip>

using namespace std;

// NOTE: To run these programs, open terminal, go into the correct directory
// ex: C++/1 - Usage of Variables and printf/complex print statements with variables
// Run "g++ -o main main.cpp" and then "./main"

int main()
{
    string wordToPrint = "Bob";
    int intToPrint = 50;
    char charToPrint = 'B';
    double doubleToPrint = 12.50;
    
    // prints "My dad's name is Bob. He is 50 years old. 
    // His first name starts with the letter B. For lunch,
    // he had a hamburger for $12.5."
    cout << "No decimal formatting:" << endl;
    cout << "My dad's name is " << wordToPrint << ". He is " 
        << intToPrint << " years old. His first name starts with the letter " 
        << charToPrint << ". For lunch, he had a hamburger for $" 
        << doubleToPrint << "." << endl << endl;

    // prints "My dad's name is Bob. he is 50 years old. 
    // His first name starts with the letter B. For lunch,
    // he had a hamburger for $12.50."
    // NOTE: fixed << setprecision(2) allows you to print a decimal with a specific amount of decimal points
    cout << "With decimal formatting:" << endl;
    cout << "My dad's name is " << wordToPrint << ". He is " 
        << intToPrint << " years old. His first name starts with the letter " 
        << charToPrint << ". For lunch, he had a hamburger for $" 
        << fixed << setprecision(2) << doubleToPrint << "." << endl;

    return 0;
}