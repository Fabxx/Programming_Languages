# Use cases

-`&` it's used to test bits

-`|` it's used to set bits.

In embedded programming these operators are useful to switch pin states

you can also check if a number is even or odd by using bitwise & operations with a single bit mask that

can be 1 (to check if it's odd) or 0 (to check if it's even). You can pick any pair of bits at any position.

NOTE: Mask value can be any number depending on the case. Can be binary, decimal or hexadecimal

example:

if (num & 1) {

  print("odd");

  }

This checks the least significant bit `LSB` of a given binary sequence, and tests the bits with the mask to determine
the parity of the number.

# Alternative for parity check
Using the module operation with `n%2==0` comparison.
