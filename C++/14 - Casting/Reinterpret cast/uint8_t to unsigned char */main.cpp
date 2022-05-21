#include <iostream>
using namespace std;
/**
 * @brief Reinterpet cast makes the compiler change the variable type to another, so that the compiler
 *        can interpret that variable to a completely different type. The bits are seen with a different
 *         layout, it can be used only with pointers or memory areas.
 * 
 * @return int 
 */
int main()
{
    //-----UINT8_T to unsigned char *
    /*Here we print the pointer memory of a. in this case we're converting a uint8_t to unsigned char *.
    WHy uint8_t? a char is a equivalent of 8 bit, so we need the same data lenght for the integer, or we'll
    lose precision*/
    uint8_t a = 90;
    std::cout << reinterpret_cast<unsigned char *>(&a) << endl;
    return 0;
}
