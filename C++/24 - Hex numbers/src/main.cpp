/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
            -Hexadecimal is base 16, with numbers that go from 0-9 and A-F, where
             A-F is from 10-15.

             -Hex is used to represent memory addresses. The lenght of the address depends on the
              CPU registry architecture and the data type used.

              -Each character in hex is 4 bits, to represent a byte you need two hex digits.
              that's why you see the memory in hex editors as something like this:

              AA FF 0C 49

              I use this formula to calculate the lenght of an address:

              n x 4 where:

                -n is the number of bits

                -4 is the base of the hex bits. 

                AA FF 0C 49 is 8 digits of 4 bits. 8 x 4 = 32 bit address.
             
              -the 0x it's just a suffix to indicate that the value is a hex address.


 * @version 0.1
 * @date 2024-12-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main(int argc, char *argv[])
{
    int address {0x00001478};
}
