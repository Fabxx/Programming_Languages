#include <iostream>
#include <string_view>

/**
 * @file main.cpp
 * @author Fabxx
 * @brief 
         Available since C++ 17

         Consider the following situation:
         */

         void print(std::string s)
         {
            std::cout << s << "\n";
         }

         void func1()
         {
            std::string str {"my string"};

            print("a random string");   //literal argument
            print(str);                 //object argument.
         }
         /*

         In this case:
         
         -if the function argument is temporary like a literal it will be destroyed.
         
         -If it's an object like str, the value is copied into s, until its scope ends and gets destroyed. 
          This is expensive for strings, the mechanism it's called "Pass by Value".

          
          Now consider the following:
          */

          void print(std::string_view s)
          {
            std::cout << s << "\n";
          }

         void func2()
         {
            std::string str {"my string"};
            print(str);
         }
         
         /*

         String_view creates a view towards the object that won't make a copy of the string,
         but references the same address of str, acting similar to the "Pass by Reference"
         mechanism, but in read only. So use this when you don't need to edit the parameter 
         inside the function, or you need constant strings that will not be modified.

         An object type is a owner, which owns memory and can copy/edit/destroy it

         View types can only view the passed memory, without making copies.
         */
        
        /*
         
        NOTE:

            -You can't initialize std::string with a std::string_view. Because a view type expects
             a initialized object to create the view of its memory to access.
             */

             void initStr(std::string s)
             {

             }

             int main()
             {
                std::string_view s {"my string"};

                initStr(s); // cannot pass string_view to string.
             }
        
        /*
          NOTE:
            only return a std::string_view type if the value comes from a parameter. If returning from a local
            variable the view will get destroyed and will be invalid. 
        */

             std::string_view returnView(std::string_view s)
             {
                std::string_view localView {"something"};

                return s; // correct, s will be guaranteed to be valid at return

                return localView; // error, local variable will be destroyed and view will not be available.
             }


        /*

            -You can constexpr a local std::string_view, because its value is known at compile time, it is not needed
             a copy first to determine the content.

            -If you need to edit the string parameter at runtime, you have to use std::string instead but in a 
             way we'll see later.

            -Don't edit a string that is being viewed by string_view. unexpected or undefined behavior will result.

            Example:
            */

        void func3()
         {
            std::string str {"my string"};
            std::string_view view {str}; //now viewing str

            str = "new string"; // invalidates the previous view.
            
            std::cout << view << "\n"; // undefined behavior
         }
        
        /*
          NOTE: When using string constants, preferr using string_view over std::string or a C-Style string, initializing these objects is expensive.
        */

        void stuff()
        {
           std::string_view {"my constant string"}; //preferred method, since you don't edit a string_view.

            const char *myCString {"C-Style string"}; //expensive because of object init

            const std::string str {"my constant string"}; //same as C-style string.
        }

        /*

 * @version 0.1
 * @date 2024-12-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
