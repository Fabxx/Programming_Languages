#include <iostream>

/**
 * @brief A friend class can be used to access private/protected members of another class.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

/*Note: We can declare friend class or function anywhere in the base class body whether its private, protected or public block. 
  It works all the same.*/
class A 
{
	private:
		int a;

	protected:
		int b;

	public:
		friend class B;
		//init vars.
		A()
		{
			a = 10;
			b = 20;
		};
};

class B
{
	public:
		void access(A vars);
};

//accessing private and protected members via A object from B class, which is declared friend inside A.
void B::access(A vars)
{
	std::cout << vars.a << "\n" << vars.b << std::endl;
}

int main()
{
	A vars; B obj;
  	obj.access(vars);
	return 0;
}
