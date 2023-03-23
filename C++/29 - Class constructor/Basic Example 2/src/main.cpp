#include <iostream>

class constructor
{

private:
		int16_t a;
public:
		void input();
		void output();
		static void funcBeforeObj();

		constructor();
		~constructor();
};

void constructor::funcBeforeObj()
{
	std::cout << "Printing message before object call: " << std::endl;
}

void constructor::input()
{
	std::cin >> a;
}

void constructor::output()
{
	std::cout << "Value of a after destruction: " << a << std::endl;
}


/*In constructors it's possible to call the functions of the class.
  If in main we want to call other functions before the constructor, we need them as static methods
  NOTE: Function declarations and definitiond are not influenced by this rule.*/
constructor::constructor()
{
	input();

	if (a > 10)
	{
		std::cout << "Check by constructor" << std::endl;
	}
}


//The destructor is called automatically if declared, if you don't want to destroy data, simply don't do this function.
constructor::~constructor()
{
	a = 0;
	output();
}

int main()
{
	//static function before constructor initialization.
	constructor::funcBeforeObj();

	/*without the object call constructor.*/
	constructor();

	/*Alternative way to call constructor and destructor with object.*/
	//constructor obj;
	return 0;
}