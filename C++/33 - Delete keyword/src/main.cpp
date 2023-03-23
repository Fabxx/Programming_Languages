/**
 * @file main.cpp
 * @author Fabxx
 * @brief This keyword it's used to delete a pointer, specifically, it deletes values inside the heap created with new keyword.
 * 		  can also be used to delete arrays and any types of pointers. Does not destroy pointer to object, but value or memory block
 * 		  pointed by the pointer is destroyed.
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

static void func(int *ptr)
{
	delete(ptr);
};

int main()
{
	
	int *ptr = new int(20);
	int *arr = new int[10];

	std::cout << "Pointer before delete: " << *ptr << std::endl;
	delete ptr;
	//gives random garbage value due to deletion.
	std::cout << "Pointer deleted: " << *ptr << std::endl;

	for (size_t i = 0; i < 10; i++) {
		std::cin >> arr[i];
		std::cout << arr[i] << std::endl; 
	}

	delete[] arr;

#if defined (__linux__)
	system("clear");
#elif defined (_WIN32)
	system("cls");
#endif
	
	//same for array.
	std::cout << "Array after deletion:" << std::endl;
	for (size_t i = 0; i < 10; ++i){
		std::cout << arr[i] << std::endl;
	}

	//deleting argument pointer
	int *ptr2 = new int(25);
	func(ptr2);
	
	return 0;
}