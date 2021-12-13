/**
 * @file main.cpp
 * @author -_<
 * @brief Showing basic example usage of a stack. Input is done from above and 
 *        scrolls down. Removal remoes items from the bottom. Values accepted are numbers.
 * 		  The functions associated with stack are: 
empty() – Returns whether the stack is empty in boolean format. – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top(LIFO based, bottom element it's considered the top) – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g)/emplace(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) 
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> stack1;
	stack1.push(10.70);
	stack1.push(20);

	while (!stack1.empty()) {
		cout << "Printing with while: " << stack1.top() << endl;
		//if we don't empty the stack, the pointer to it will always detect the last element, resulting in a loop.
		stack1.pop();
	}
	
	stack1.push(40);
	stack1.push(60); //current top in LIFO logic.
	/*The for here is a little tricky, to avoid segmentation fault we cannot compare any kind of
	 iterator here since it's a boolean value that stops the function. we can leave empty spaces and use the 
	 condition directly with for*/
	for (; !stack1.empty();){
		cout << "Printing with for: " << stack1.top() << endl;
		if (stack1.top() == 40){
			cout << "Found 40 on list!" << endl;
		}
		stack1.pop();
	}
	
	return 0;
}

