/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *      	Floating point numbers are those numerical types that can store larger values by using the decimal point.
 		
 		Floating point number features:
 		
 		-always signed (positive/negative)
 		-Three types of floating point numbers:
 			
 			-float: 	4 byte
 			-double: 	8 byte
 			-long double 	8/12/16 byte
 		
 		-Modern architectures follow IEEE 754 standard
 		
 		NOTES:
 		
 			-std::cout truncates a 0 fractional part.
 			
 			-Earch type can represent a limited number of significant digits to 
 			 get as close as the original number.
 			 
 			-Use float over double only when you can afford to discard that extra precision, 
 			 or your architecture cannot hold a longer value than float.
 			  
 			-with std::setprecision(x) you can set how many significant digits to output. However this 
 			 precision must match the limit of the used type.
 			   
 			   
 		
 * 
 * 
 *        
 * @version 0.1
 * @date 2024-11-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(int argc, char *argv[])
{
    float a {0.5f}; //f means float
    
    double b {1.547897};
    
    int {0}
    
    double {0.0} //prints as 0
    
    float {0.0f} //prints as 0
}
