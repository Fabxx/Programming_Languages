/**
 * @file main.cpp
 * @author Fabxx
 * @brief The continue keyword allows in a iteration (for, while, do-while) to skip the next instructions
 *        and directly increase the counter until a specific condition is met. In this case we simply skip the
 *        cout until i reaches 5.
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

int main(void)
{
    for (size_t i = 0; i < 10; i++) {
        if (i < 5) {
            continue;
        }
        std::cout << "not skipping this block!" << std::endl;
    }
    return 0;
}