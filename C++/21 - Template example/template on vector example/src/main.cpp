#include <iostream>
#include <string>
#include <vector>

//just a function to clear terminal, ignore this.
#if defined (__linux__)
	inline void clear_terminal(void) 
	{
		system("clear");
	}
#endif
#if defined (_WIN32)
	inline void clear_terminal(void)
	{
		system("cls");
	}
#endif


template<typename x>

class A 
{
	public:
	std::vector<x> vec;
	std::string mystring;		
};

int main(void)
{
	A<std::string> obj;

	for (size_t i = 0; i < 4; ++i) {
		getline(std::cin, obj.mystring);
		obj.vec.push_back(obj.mystring);
	}

	clear_terminal();

	//print the strings of vector
	for (size_t i = 0; i < obj.vec.size(); ++i){
		std::cout << obj.vec[i] << std::endl;
	}

	//we can also change the type of the vector data in the code after that
	obj.vec.erase(obj.vec.begin(), obj.vec.end());
	A<int> obj2;

	for (size_t i = 0; i < 2; ++i) {
		obj2.vec.push_back(i);
	}

	clear_terminal();
	
	for (size_t i = 0; i < obj2.vec.size(); ++i) {
		std::cout << obj2.vec[i] << std::endl;
	}
	
	return 0;
}