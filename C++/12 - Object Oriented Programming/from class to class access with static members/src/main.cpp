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

//private members must be static too:

class class3 {
	private:
		static int a;
	public: static void input(){
		cin >> a;
		cout << "Static variable:  " << a << endl;
};

	/*If in a class there are private variables, the functions/members that have to operate on them
        MUST be all in the same class, or else we won't have access to the results we need.


	If we need a value of a variable from a class to another, like doing a switch in another class with a 
	value from another class. we can make that variable in the class public, out of all the members:
	*/
class input {
    public: 
            static int choice; //public variable, ACCESSIBLE FORM OTHER CLASSES.
            
		static void inputinit() {
                cin >> choice;
    }
	
};

	class switcher {

public:
    static void switchoption() {
         switch (input::choice) { //switching choice value from another class member.
        case 1:

};
