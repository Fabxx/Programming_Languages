#ifndef B0103129_13A4_4999_A7D4_7E795DB938D1
#define B0103129_13A4_4999_A7D4_7E795DB938D1
#include <iostream>
using namespace std;
#include <random>

template<class mersenne, typename datatype>
class randomizer {
 public:
            random_device nameofseed;
            datatype number; //saving generated number.

      randomizer() {
             mt19937 mt(nameofseed());
                  uniform_int_distribution<datatype> dist(INT_MIN, INT_MAX);
                        number = dist(mt);
      }
};

#endif /* B0103129_13A4_4999_A7D4_7E795DB938D1 */
