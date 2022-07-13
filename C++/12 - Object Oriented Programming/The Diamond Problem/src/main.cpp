#include <iostream>

/*The diamond problem is when two superclasses share the same base class, and the compiler
  doesn't understand which class is referring to the base class when using it
  in this example Class3 is the derived class and has two bases.*/

class class1
{
public:
	void print_class1();
};

class class2 : public class1
{
public:
	void access_class1();
};

class class3 : public class2, class1 //diamond problem
{
public:
	void access_ambiguated();
};

void class1::print_class1()
{
	std::cout << "hello class1" << std::endl;
}

void class2::access_class1()
{
	print_class1();
}

void class3::access_ambiguated()
{
	class1 obj; //in this way the ambiguation it's fixed, but it's better to now extend a class into two classes
	 		   //to avoid this problem in the design.
	obj.print_class1();
}

int main(int argc, char *argv[])
{
	std::cout << "Hello world!" << std::endl;
}