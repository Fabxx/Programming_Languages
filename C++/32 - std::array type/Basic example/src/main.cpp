#include <iostream>
#include <array>

int main(void)
{
	std::array<int, 4> arr; //equivalent of int arr[4].
	std::array<std::string, 2> names; //can put multiple chars for each position, equivalent of char *names[].
	std::array<char, 3>chars; //can put single chars only for each position.

	for (size_t i = 0; i < 4; ++i)
	{
		//not using arr.push_back() like vector type.
		std::cin >> arr[i];
		std::cout << "" << arr[i] << std::endl;
	}

	for (size_t i = 0; i < 2; ++i)
	{
		std::cin >> names[i];
		std::cout << "Name put in the array of string type: " << names[i] << std::endl; 
	}
	
	
	if (arr.size() == 4)
	{
		std::cout << "THe size of the first vector is: " << arr.size() << std::endl;
	}

	return 0;
}