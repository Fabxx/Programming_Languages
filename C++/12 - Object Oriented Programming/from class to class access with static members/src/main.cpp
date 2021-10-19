/**
 * @file main.cpp
 * @author Prox_Y
 * @brief A class can access to another class only if his members are static.
 * @version 0.1
 * @date 2021-10-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

class class1 {
	
public:
		static void member() {
			cout << "Hello" << endl;
		}
		void nonStaticMember() {
			cout << "No hello" << endl;
		}
};

class class2 {
	public:
		static void member1() {
			class1::member();
			//class1::nonStaticMember(); gives error.
		}
};

int main() {

	class2 access;
	access.member1();
	return 0;
}