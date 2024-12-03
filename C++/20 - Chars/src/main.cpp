/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
 *         -Char type can store a single char

            -Chars are numerical values interpreted as characters
            
            -int/uint8_t behave like chars. if we input numbers in these types the sequence
             is treated as chars instead.
            
            -A char needs to be stored with single quotes '', not double quotes "".

            -char type follows ASCII table standard, fixed size chars follow UNICODE standard to 
            interpret wide chars (char16_t for example). unicode is used in windows environment.

            UTF-8/UTF-16/UTF-32

            -By default the size of char is 1 byte. signed range goes from -128 to 127.

            To get all possible combinations of bits you can use the following formula:

            2^n  where n is the bits.

            the inverse formula to retreive the bits is the following:

            log2(n-combinations)

            -Chars have dedicated escape sequences (example \t, \n etc). 
            you can check online for a list of escapes.

            NOTES:
                -It is preferred to use \n over std::endl. while the escape sequence
                 only moves the cursor to the next line, std::endl also flushes 
                 the output buffer. C++ Automatically handles the output buffer when needed.

                 -char8_t is available since C++ 20 and supports UTF-8
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
    std::cout << "hello" << "\n"; //hello is a string literal

    char ch {'c'}; //single char storage.

    std::cout << static_cast<int>(ch) << "\n"; //converts single char to its ASCII value.
}
