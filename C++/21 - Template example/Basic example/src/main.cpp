/**
 * @file main.cpp
 * @author SSUPI and Prox_y for documentation translation
 * @brief Showing simple usage of template with typename keyword, which express a generic undefined type.
          For a more complex usage see: 
	  https://github.com/Prox-y/Programming_Languages/tree/master/C%2B%2B/26%20-%20Dictionary/Hash%20table%20with%20hex%20values
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

//typename indicates generic type, writing class T is equivalent to typename T. the template can accept constant types.
//Each function writed below the template, is linked to the template itself until you close the last bracket of that function
//In this case, the template it's valid until the class finishes.
template<typename Z, size_t N> //Z, parameter type. 

class test{    
        public:  
                Z value[N]; //array of integers which will become int.
	
	test() {
		cout << "Constructor called!" << endl;
	}
	
	//creating constructor copies to move the value of the original constructor in other constructors
	test copy1, copy2;
	copy1 = test;
	copy2 = copy1;
};

int main() {

        test<int, 3> templateExample; //Object declaration with template
	//test it's the class, int it's the type on Z, 3 it's the value on size_t N.
	//TemplateExample it's the object decalred, which will be used for the array.

        for(int i = 0; i < 3; i++){
		test<int, 3>(); //The constructor can be called with this syntax along with the template parameters.
                templateExample.value[i] = i+5;
                printf("%d ", templateExample.value[i]); //Output: 5 6 7
        }
        return 0;
}
