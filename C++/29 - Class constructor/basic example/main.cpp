#include <iostream>
using namespace std;

/*A constructor it's a integrated function class. Can also have a type if you want to return something with it. It gets initialized and executed
  before every other instruction unless it's made static. Useful to initialize data before working on it with other functions.*/

class first {
    private:
        int a, b;
    public:
    
        first() {

            a = 5, b = 7;

            cout << "Printing with constructor\n";
            cout << "Operation result is: \n" << a+b;
        }
          ~first(); /*destructor, in this case it does nothing, but if we want we can NULL the values of a and b. A destructor frees the data captured
                    **we select from the constructor*/
};

//Alternative constructor initialization, implicitly void. It's always better to write it separately from the class unlike above, to make the code more
//readable.

first::first()
{
  //code
}


int main() {

    first();

    return 0;
}
