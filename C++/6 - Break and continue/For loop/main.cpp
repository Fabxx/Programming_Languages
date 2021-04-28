#include <iostream>

using namespace std;

int main()
{
    // prints the numbers 0-6.
    // notice how numbers 7-10 aren't printed
    for (int i = 0; i < 10; i++){
        cout << i << " ";

        if (i == 3){
            cout << "continue " << endl;
            continue;
        }

        if (i == 6) {
            cout << "break! " << endl;
            break;
        }

        cout << "*" << endl;
    }
}
