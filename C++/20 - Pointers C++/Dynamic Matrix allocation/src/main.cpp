/**
 * @file main.cpp
 * @author Prox_y
 * @brief Dynamic allocation of a matrix.
 * @version 0.1
 * @date 2021-10-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

int main() {

   int rows = 3;
   int cols = 5;

   // dynamic allocation:
   int *matrix = new int[rows*cols];
   
   // iteration & printing:
   for (int i=0; i<rows; i++) {
      for ( int j=0; j<cols; j++ ) {
         std::cout << matrix[i*cols+j] << ' ';
      }
      std::cout << '\n';
   }

   // deallocation:
   delete[] matrix;

	return 0;
}