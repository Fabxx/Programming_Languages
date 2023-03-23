/**
 * @file main.cpp
 * @author Fabxx
 * @brief "this" is an implicit pointer that can be used inside a class/class function, to access a class member. Can't be used inside static functions.
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

class A 
{
	public:
		int x;
		void change_x(int x);
};

//this referres to A::x.
void A::change_x(int x)
{
	this->x = x;
}

int main(void)
{
	A obj;
	int myx = 10;
	obj.x = 20;

	std::cout << "x member before change: " << obj.x << std::endl;
	obj.change_x(myx);
	std::cout << "x member after change: " << obj.x << std::endl;
	
	return 0;
}