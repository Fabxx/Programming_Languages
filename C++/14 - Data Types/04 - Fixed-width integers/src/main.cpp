/**
 * @file main.cpp
 * @author Fabxx
 * @brief Fixed size integers can help in understanding the actual limit of the data types. Not leaving this to a specific architecture that interprets
 *        
 *        the size based on its standard (i.e a int can be of 2 bytes, but also 4 bytes depending on the system, so you don't know if the int is 16 or 32 bits).
 * 
 *        Fixed-size types can remove this ambiguity:
 * 
 *          std::int8_t	    1 byte signed	    -128 to 127	Treated like a signed char on many systems.
            
            std::uint8_t	1 byte unsigned	    0 to 255	Treated like an unsigned char on many systems.
            
            std::int16_t	2 byte signed	    -32,768 to 32,767	
            
            std::uint16_t	2 byte unsigned	    0 to 65,535	
            
            std::int32_t	4 byte signed	    -2,147,483,648 to 2,147,483,647	
            
            std::uint32_t	4 byte unsigned	    0 to 4,294,967,295	
            
            std::int64_t	8 byte signed	    -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	
            
            std::uint64_t	8 byte unsigned	    0 to 18,446,744,073,709,551,615


            NOTES:

                -This avoids the usage of keywords signed and unsigned on C/C++ by modern standards.
                
                -Ranges are the same as explained in the previous chapter.

                -Avoid the use of int8/unit8_t when storing numerical values, because on some architectures that type can behave like
                 a char instead of a int. So at minimum use 16 bit values.

            
            LIMITATIONS:

                -If an architecture does not support fixed size types, the program will not compile

                -The CPU might be faster in processing wider data types rather than smaller ones 
                 for example, std::int32_t might be processed slower than std::int64_t, however this 
                 might not improve the general performance of the program.


            To fix these two limitations, there are two types of data:

                -fast/least integers: provide a type with width of at least 
                # bits (where # = 8, 16, 32, or 64). YOu can determine which type is faster
                to process by the CPU.

                an output example:

                std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
                std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
                std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
                
                std::cout << '\n';
                
                std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
                std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
                std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

                least 8:  8 bits
                least 16: 16 bits
                least 32: 32 bits

                fast 8:  8 bits
                fast 16: 32 bits //fast16_t returned that a fast 32 bit instead is faster to process on the current machine.
                fast 32: 32 bits

                THis mechanism it's useful in very specific cases, so it's recommended to stick to the default types.
 *          
 * @version 0.1
 * @date 2024-11-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

int main()
{
     std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
     std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
     std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";

     std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
     std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
     std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
}
