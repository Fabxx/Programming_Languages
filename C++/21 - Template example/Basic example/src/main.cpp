/**
 * @file main.cpp
 * @author SSUPI and Prox_y for documentation translation
 * @brief Showing simple usage of template with typename keyword, which express a generic undefined type.
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

template<typename Z, size_t N> //Z, parameter type. 
/*
		C++ supports inside templates undifined parameter types, called "of values". In this case it's 
		a size_t N. They must be constant variables or specific expressions.
*/
class test{    
        public:  
                Z value[N]; //array of integers which will become int.
};

int main() {

        test<int, 3> templateExample; //Object declaration with template
									  //test it's the class, int it's the type on Z, 3 it's the value on size_t N.
									  //TemplateExample it's the object decalred, which will be used for the array.

        for(int i = 0; i < 3; i++){  
                templateExample.value[i] = i+5;
                printf("%d ", templateExample.value[i]); //Output: 5 6 7
        }
        return 0;
}
