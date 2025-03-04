/**
 * @file main.cpp
 * @author Fabxx
 * @brief
         If you want to share constant variables across the code without duplicate definitions,
         instead of defining them as extern, define them as inline.

         Inline variables are implicitly extern to de-duplicate the definitions,
         and also avoids the foward declaration required by extern.

         So, only ONE Instance is created of these objects, and they can be included everywhere.

         NOTE: Since we're talking about constants, it is also useful to mark them as constexpr for 
               optimization purposes

               If you need global constants and your compiler is C++17 capable, prefer defining inline constexpr global variables in a header file.

               So, inline variables are also extern
                   constexpr functions are also inline

                   if functions can't be constexpr, use inline explicitly
 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 #include <iostream>
 #include "constants.hpp" // no code will be copied, instead will be referenced.

 int main()
 {
     std::cout << constants::val << "\n" << constants::val2 << "\n"
               << constants::path << "\n";
 }
