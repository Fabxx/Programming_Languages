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

/*typename indicates generic type, writing class T is equivalent to typename T. the template can accept constant types.
  Each function writed below the template, is linked to the template itself until you close the last bracket of that function
  In this case, the template it's valid until the class finishes.*/
template<typename Z, size_t N> //Z, parameter type. 

class test{    
        public:  
		//array of integers which will become int.
                Z value[N];
};

int main() {
	//Calling class object, with template arguments specified.
        test<int, 3> templateExample;
	//constructor call syntax: test<int, 3>();

        for(int i = 0; i < 3; i++){
                templateExample.value[i] = i+5;
                printf("%d ", templateExample.value[i]); //Output: 5 6 7
        }
        return 0;
}
