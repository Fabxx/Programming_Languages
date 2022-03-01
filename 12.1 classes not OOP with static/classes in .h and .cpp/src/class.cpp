#include <libs.h>

//declaring members created, so they are effective.
int mainclass::a;
int mainclass::b;

void mainclass::inputa() {
        cin >> a;
}

void mainclass::inputb(){
    cin >> b;
}

void mainclass::output(){
    cout << "A: " << a << "B: " << b << endl;
}