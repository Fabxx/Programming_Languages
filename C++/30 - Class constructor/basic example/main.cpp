#include <iostream>
using namespace std;

/*A constructor is a basic function, inside a class, it takes the type "first", normally we would do simple "void sum()" for example
  and that sum() is a constructor, but with type "void" instead. A constructor in a class can be useful if a class has to do 
  specific things that needs to be done only when needed, without creating overhead with more funcitons. */

class first {
    private:
        int a, b;
    public:
    
        first() {

            a = 5, b = 7;

            cout << "Printing with constructor\n";
            cout << "Operation result is: \n" << a+b;
        }

        ~first(); //destructor, removes form memory the constructor.
};

int main() {

    first();

    return 0;
}