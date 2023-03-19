#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    // prints the numbers 0-6.
    // notice how numbers 7-10 aren't printed
    while (i != 10){
        cout << i << " ";

        if (i == 3){
            cout << "continue " << endl;
            i += 1;
            // skips the rest of the loop
            continue;
        }

        if(i == 6) {
            cout << "break! " << endl;
            break;
        }

        i += 1;
        cout << "*" << endl;
    }
}
