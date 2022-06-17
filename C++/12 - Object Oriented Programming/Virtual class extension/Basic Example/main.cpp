#include <iostream>
using namespace std;

/*Virtual tells the compiler to create a jump table so that it can 
call subclass functions through superclass pointers at runtime*/

class Car // Base class (Superclass)
{
public:
	virtual void Create() // virtual function, if you remove virtual key, the print will not change.
	{
		cout << "Parent class: Car\n";
	}
};
 
class Sedan: public Car { //derived class (subclass) where we override Create of Car with Create of Sedan
public:
	void Create() {
		cout << "Derived class: Sedan - Overridden C++ virtual function";
	}
};
 
int main() {

	Car x, *y;
	x.Create();
	 //overriding the Superclass function with the Subclass function
	y = new Sedan();
	y->Create();

	//virtual with the same class object is the equivalent of this:
	/*
	Sedan *y = new Sedan(); //pointer object must be init with a Class memory.
	y->Create();
	*/

	return 0;
}