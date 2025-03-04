#include <bitset>
#include <cstdint>
#include <iostream>

/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
    
    std::bitset operates on bits of a given variable or literal.
        
    provides 4 key member functions that are useful for doing bit manipulation:

    test() checks if a bit position is a 0 or 1.       - equivalent of AND with negated mask to test bits 
    
    set() turns a bit position on to 1                 - equivalent of OR with a 0x1 mask to enable a bit
    
    reset() clears the bit to 0               - equivalent of AND with 0xF mask.
    
    flip() acts as a toggle to switch the bit - equivalent of XOR with 0x1 mask

    size()  returns the number of bits in the bitset.

    count() returns the number of bits in the bitset that are set to true.

    all()   returns a Boolean indicating whether all bits are set to true.

    any()   returns a Boolean indicating whether any bits are set to true.

    none()  returns a Boolean indicating whether no bits are set to true.

    You can use the apostrophe in the sequence to make it more readable.

    You can also combine the bitwise operators between bitsets to produce new binary
    sequences.

    NOTE: If you ever need to interpret a smaller type into a bigger type, use static_cast
          If you have a uint8_t sequence and try to treat it as a uint32_t this needs
          to be converted properly or else incorrect sequencese will be generated.

          Avoid bit shifting on types smaller than int, because these operands
          can be internally promoted as int or unsigned int, and shift operands
          are width sensitive.

    NOTE: Unlike bitwise operators, bitset allows to edit only 1 bit position at the time.

    NOTE: Yuu can also concatenate multiple values on bitwise operators:
          
          flags ^= (reg1 | reg2);

          toggles reg1 and reg2
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 int main()
 {
    // NOTE: Bitset argument indicates the size, however the size is always interpreted as BITS, not BYTES.
    constexpr std::uint8_t reg {0b1111'0000};
    constexpr std::uint32_t reg2 {0x00000000};
    
    std::bitset<8> regBits {reg};
    std::bitset<8> newReg {reg};
    std::bitset<sizeof(uint32_t)*8> bits;

    regBits.set(2); // set position 2 of the 32 bit value to 1.

    std::cout << "Register bits now are: " << regBits << "\n"
              << "Number of bits set to true: " << regBits.count() << "\n"
              << "Number of bits: " << regBits.size() << "\n";

    std::cout << "AND Operation between first and second sequence: " << (regBits & newReg) << "\n";
 }
