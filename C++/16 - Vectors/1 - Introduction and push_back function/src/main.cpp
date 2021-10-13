/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief This program shows how we can use vectors instead of arrays:
 * 
 *  IMPORTANT NOTE: difference between arrays and vectors is that the size of a vector can be 
 *                  changed during runtime dinamically! 
 * 
 *  vector.push_back(variable) puts an element in the last position of the vector. like a cin for vectors.
 * 
 *  begin() – Returns an iterator pointing to the first element in the vector
   
    end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
   
    rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
   
    rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
   
    cbegin() – Returns a constant iterator pointing to the first element in the vector.
   
    cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
   
    crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
   
    crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

    Dimensions of vector.

    
    size() – Returns the number of elements in the vector.
    
    max_size() – Returns the maximum number of elements that the vector can hold.
    
    capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    
    resize(n) – Resizes the container so that it contains ‘n’ elements.
    
    empty() – Returns whether the container is empty.
    
    shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    
    reserve() – Requests that the vector capacity be at least enough to contain n elements.

 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <vector>
using namespace std;


int main() {

   vector<int> name; //standard declaration.
   typedef vector<int> integers; 

    integers vector1; 
    int x = 0;

    for (size_t i = 0; i < 5; i++) {
       cin >> x;
       vector1.push_back(x);
    }
      if (vector1[4] == 0) { //using the integrated index to access to the 5th position.
          cout << "The fifth element it's 0" << endl;
       } else {
          cout << "Number is: " << vector1[4] << endl;
       }

         return 0;
}