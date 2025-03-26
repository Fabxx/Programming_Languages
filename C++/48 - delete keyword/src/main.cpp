/**
 * @file main.cpp
 * @author Fabxx
 * @brief
          Can be used for:

          - Make a function not callable

          - Force a parameter type which must be identical to the specified type. If function
            is deleted it will give error.

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

// halt compilation if called.
void unused() = delete;

template<typename T>
void param(T x) = delete;

int main()
{
 
}
