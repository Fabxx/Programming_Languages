/**
 * @file main.cpp
 * @author Fabxx
 * @brief std::chrono provides also time variables that can be used to interpret values as different
 *        time measurements:
 * 
 *       /*
/// nanoseconds
    using nanoseconds	= duration<_GLIBCXX_CHRONO_INT64_T, nano>;

    /// microseconds
    using microseconds	= duration<_GLIBCXX_CHRONO_INT64_T, micro>;

    /// milliseconds
    using milliseconds	= duration<_GLIBCXX_CHRONO_INT64_T, milli>;

    /// seconds
    using seconds	= duration<_GLIBCXX_CHRONO_INT64_T>;

    /// minutes
    using minutes	= duration<_GLIBCXX_CHRONO_INT64_T, ratio< 60>>;

    /// hours
    using hours		= duration<_GLIBCXX_CHRONO_INT64_T, ratio<3600>>;

#if __cplusplus > 201703L
    /// days
    using days		= duration<_GLIBCXX_CHRONO_INT64_T, ratio<86400>>;

    /// weeks
    using weeks		= duration<_GLIBCXX_CHRONO_INT64_T, ratio<604800>>;

    /// years
    using years		= duration<_GLIBCXX_CHRONO_INT64_T, ratio<31556952>>;

    /// months
    using months	= duration<_GLIBCXX_CHRONO_INT64_T, ratio<2629746>>;
*/

#include <iostream>
#include <thread>
#include <chrono>

int main(void)
{
    for (size_t i = 0; i < 2; ++i) {
        std::cout << "waiting 2 seconds..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    return 0;
}