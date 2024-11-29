/**
 * @file main.cpp
 * @author Fabxx
 * @brief different types of signed integers:
 * 
 *          short int	16 bits	
            int	        16 bits	 (32 on modern architectures)
            long int	32 bits	
            long long int	64 bits

            Ranges:

            8-bit  signed	-128 to 127
            16-bit signed	-32,768 to 32,767
            32-bit signed	-2,147,483,648 to 2,147,483,647
            64-bit signed	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807


            if a value is too big for the specified size, the integer will overflow, the program can either crash
            or eat up all the memory because of a leak.


            NOTES:
                -by default you can avoid typing the "int" keyword for those types that are signed and are interpreted as integers.
                 so you can type short, long long, long etc
                
                -Do NOT use the "signed" keyword since it's redundant.	

                -If using UNSIGNED Keyword, the negative combinations get merged with the positive ones, increasing the positive range:

                from

                    16-bit signed	-32,768 to 32,767

                to

                    16-bit unsigned  65.535

                
                however, this means that we cannot have negative precision, so any data that produces a negative result will be lost, or
                overflow/truncation can happen if going over the max number that can be stored. It is easier to overflow the bottom range
                since it is 0.

                -Mixing signed and unsigned integers can cause undefined behavior and produce random results

                -Some cases can require unsigned integers for performance purposes, or because we need to store higher positive values.

                
 * @version 0.1
 * @date 2024-11-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(void)
{
    short number =  32769; //will overflow and give a wrong number as a result

    unsigned short num = 32770; //will not overflow, can go up to 65535

    std::cout << number << "\n" << num << std::endl;
}
