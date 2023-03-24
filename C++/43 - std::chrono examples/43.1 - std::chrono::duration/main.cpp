/**
 * @file main.cpp
 * @author Fabxx
 * @brief Chrono is a library for time implementation. it includes three types of clock:
 *        -high resolution clock: the clock with the shortest tick period available on the system, which gives highest precision.
 *        -steady_clock: a monotonically increasing clock that’s not affected by changes to the system time
 *        -system_clock: the system-wide real time wall clock. It’s affected by the system’s time adjustments.
 * 
 *        NOTE: the precision and accuracy of the clocks and durations provided by <chrono> may vary depending on the system and platform
 *        
 *        In this example we just calculate the execution time of a thread from start to finish and print it out.
 
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <chrono>

/* here are the other types that can be used with std::chrono::duration:
  
  typedef ratio<1,       1000000000000000000> atto;
  typedef ratio<1,          1000000000000000> femto;
  typedef ratio<1,             1000000000000> pico;
  typedef ratio<1,                1000000000> nano;
  typedef ratio<1,                   1000000> micro;
  typedef ratio<1,                      1000> milli;
  typedef ratio<1,                       100> centi;
  typedef ratio<1,                        10> deci;
  typedef ratio<                       10, 1> deca;
  typedef ratio<                      100, 1> hecto;
  typedef ratio<                     1000, 1> kilo;
  typedef ratio<                  1000000, 1> mega;
  typedef ratio<               1000000000, 1> giga;
  typedef ratio<            1000000000000, 1> tera;
  typedef ratio<         1000000000000000, 1> peta;
  typedef ratio<      1000000000000000000, 1> exa;
 
  
  /*--USING HIGH RESOLUTION CLOCK--*/

  /*calculating the time that passed between the start of the clock and the end of the clock between sleep.
  in this case we print the time in milliseconds using std::milli*/

void elapsed_time()
{
  const auto start = std::chrono::high_resolution_clock::now();
  sleep(2);
  const auto end = std::chrono::high_resolution_clock::now();
  const std::chrono::duration<double, std::milli> elapsed = end - start;

  std::cout << "Elapsed time: " << elapsed << std::endl;
}

/*USING SYSTEM CLOCK*/
void elapsed_time_system_clock()
{
  const auto start = std::chrono::system_clock::now();
  sleep(2);
  const auto end = std::chrono::system_clock::now();
  const std::chrono::duration<double, std::milli> elapsed = end - start;

  std::cout << "Elapsed time: " << elapsed << std::endl;
}

/*NOTE: we can also create an object of the namespace:
        
        std::chrono::high_duration_clock start;
        
        auto start_var = start.now()
        
        DO NOT TRY TO SUBTRACT END AND START WHILE THOSE ARE OBJECTS, ALWAYS SAVE THE 
        VALUES IN A VARIABLE.
        */


int main(void)
{
    elapsed_time();
    elapsed_time_system_clock();
    return 0;
}