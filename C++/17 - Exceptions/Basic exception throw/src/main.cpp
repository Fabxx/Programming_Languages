/**
 * @file main.cpp
 * @author Prox_y
 * @brief Exceptions provide a way to react to exceptional circumstances (like runtime errors)
 * 		  in programs by transferring control to special functions called handlers.

		  To catch exceptions, a portion of code is placed under exception inspection. 
		  This is done by enclosing that portion of code in a try-block. When an exceptional circumstance arises within that block, an exception is thrown that transfers the control to the exception handler. If no exception is thrown, the code continues normally and all handlers are ignored.
		  An exception is thrown by using the throw keyword from inside the try block. 
		  Exception handlers are declared with the keyword catch, which must be placed immediately after 
		  the try block:
 * @version 0.1
 * @date 2021-10-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

int main () {
  try
  {
    throw 20;
	throw "Error";
  }
  catch (int e) {
    cout << "An exception occurred. Exception Nr. " << e << '\n';
  }
  return 0;
}
