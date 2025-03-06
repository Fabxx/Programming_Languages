/**
 * @file main.cpp
 * @author Fabxx
 * @brief
        an algorithm used to generate random numbers

        Always use std::random_device to init the seed, this sends a request to the OS about a random number.
        it is also portable.

         creates a value-initialized temporary object of type std::random_device. 
         The () then calls operator() on that temporary object, which returns a randomized value 
         (which we use as an initializer for our Mersenne Twister)

         equivalent of

         unsigned int getRandomDeviceValue()
        {
          std::random_device rd{}; // create a value initialized std::random_device object
          return rd(); // return the result of operator() to the caller
        }

        NOTE:

            Init the seed only ONCE.

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <random>
#include <iostream>

int main()
{
// create object of random device {} and return the given number by the OS ()
std::mt19937 mt{std::random_device{}()};
std::uniform_int_distribution range{0, 150};

for (int count {1}; count <= 40; ++count) {
    std::cout << mt() << '\t';

    // If we've printed 5 numbers, start a new row
    if (count % 5 == 0) {
      std::cout << '\n';
    }
  }


  // can also give multiple base numbers where to start randomize

  std::random_device rd {};
  std::seed_seq ss{rd(), rd(), rd()};
  std::mt19937 mt1 {ss};
}
