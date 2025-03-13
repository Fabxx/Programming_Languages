/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          Assert: an expression that if true, does not halt the program execution, if false
          it triggers an assertion to indicate that the condition was not met.

          Static assert: same thing but it's evaluated at compile time, like constexpr

          - the condition must be a constant expression.
          - can be placed anywhere in the code file (even in the global namespace).
          - static_assert is not deactivated in release builds (like normal assert is).
          - no runtime cost to a static_assert.

          the NDEBUG macro disables asserts on release builds, and enables them on debug builds

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

//#define NDEBUG
#include <cassert>
#include <iostream>

int main()
{
  constexpr float g {9.8};

  constexpr int x {10};

  static_assert(x == 10, "x is not bigger than 11\n" );

  assert(g < 9); // will always assert because g is not less than 9.8
}
