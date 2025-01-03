# Use cases

In embedded programming these operators are useful to switch pin states

you can also check if a number is even or odd by using bitwise & operations with a single bit mask that

can be 1 (to check if it's odd) or 0 (to check if it's even).

example:

if (num & 1) {

  print("odd");

  }

This checks the least significant bit `LSB` of a given binary sequence, and tests the bits with the mask to determine
the parity of the number.
