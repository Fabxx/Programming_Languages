/**
 * @file main.cpp
 * @author Prox_y
 * @brief Another exception example.
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <stdbool.h>

using namespace std;

class test {
private:
	int x;
	int y;
	bool flag = false;

public:

	void input() {
		cin >> x;
	}

    bool exception() {
		if (x == 10) {
			try {
				throw x;
				this->flag = true;
			}
			catch(int catchering) { //NOTE: exception catcher MUST be declared here.
				cout << "Exception Occurred on Value " << catchering << endl;
			}
			
		}
			return flag;
	}

	void print() {
		cout << "Exception returned true!" << endl;
	}

};


int main() {

	test tester;

	tester.input();
	tester.exception();
	//if the flag is true, print the exception.
	if(tester.flag) {
		tester.print();
	}

	return 0;
}
