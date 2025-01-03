# Use cases

-`&` it's used to test and clear bits

-`|` it's used to set bits.

-Clearing bits means setting them to `0`

In embedded programming these operators are useful to switch pin states

# Parity check

-Use a bitmak of 1 (odd) or 0 (even) 

If you want to switch/test specific bit positions then you first need to know which binary sequence you need

that will produce the result you want. Then use the corresponding number in hex/dec

can be 1 (to check if it's odd) or 0 (to check if it's even).

example:

if (num & 1) {

  print("odd");

  }

This checks the least significant bit `LSB` of a given binary sequence, and tests the bit with the mask to determine
the parity of the number.

# Alternative for parity check
Using the module operation with `n%2==0` comparison.
