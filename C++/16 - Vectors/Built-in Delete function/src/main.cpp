/**
 * @file main.cpp
 * @author Prox_Y
 * @brief Showing how to empty a vector with clear function.
 * @version 0.1
 * @date 2021-10-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    int a;
    for ( size_t i = 0; i < 4; i++ ){
        cin >> a; 
        v.push_back(a);
    }

    cout << "Numbers before: ";
    for ( int e : v  ) { //scanning vector with e integer.
        cout << e << ' ';
    }

    v.clear(); //clears ALL the vector.
    v.erase(v.begin() + position); //pos 0 + pos given to delete a specific element.
// erase the first 3 elements, start from 0 finish to 3:
  v.erase (v.begin(), v.begin()+3);
	
	
    
    cout << "... Numbers After: ";
    for ( int e : v ) {
        cout << e << ' ';
    }

	//alternative reading, on the terminal nothing won't appear because the vector size is 0.
	for (size_t i = 0; i < v.size(); i++){
		cout << "Numbers after with v.size() " << v[i] << endl;
	}
	
}
