#include <iostream>
using namespace std;

/*A constructor is a basic function, inside a class, it takes the type "first", normally we would do simple "void sum()" for example
  and that sum() is a constructor, but with type "void" instead. A constructor in a class can be useful if a class has to do 
  specific things that needs to be done only when needed, without creating overhead with more functions. 
  A class constructor can also maintain data at runtime when needed, so the data is stored in memory and doesn't have to be 
  re-fetched everytime, but will be destroyed as soon the constructor ends.
  NOTE: It is bad practice to use a constructor to input data, it is useful in specific conditions whereas you have to move/copy/init data
  of a class, or elaborate the data in that class after you've filled the members. SInce we don't know when exactly the constructor will be
  constructed when calling the object.*/

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

//Alternative constructor initialization

first::first()
{
  //code
}


int main() {

    first();

    return 0;
}
