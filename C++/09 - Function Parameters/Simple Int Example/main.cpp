#include <iostream>

using namespace std;

double totalAmt(double price, double tip)
{
    return price + tip;
}

double tipAmt(double price)
{
    return price * 0.18;
}

int main()
{
    double price;
    double tip;
    double total;
    cout << "How much was your dinner bill?" << endl;
    cin >> price;

    // you can call a function to retrieve a value
    tip = tipAmt(price);
    cout << "Then you should tip at least $" << tip << endl;

    total = totalAmt(price, tip);
    cout << "This will be a grand total of $" << total << endl;
    return 0;
}