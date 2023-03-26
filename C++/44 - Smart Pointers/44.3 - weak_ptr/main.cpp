/**
 * @file main.cpp
 * @author Fabxx
 * @brief Weak_ptr in this example behaves like this:
 * 
 *      1) we transfer data of sp into spt, via gw:
 * 
 *      2) sp -> gw -> spt -> use_count of gw = 1 (active, data transferr successfull)
 * 
 *      3) if sp destroyed:
 *      
 *      3.1) sp -> gw fails -> gw has expired -> use_count of gw = 0 (inactive, no longer transferring data after defined scope)
 * 
 *      once spt has the data and sp gets destroyed, we basically passed the data to the new object
 *      pointer, and we can work with it.
 * 
 *      the weak_ptr acts as a bridge between shared pointers that allows us to share resources between functions
 *      that contain other shared pointers.
 * 
 *     NOTE: weak_ptr does not own the reference to the object, but just passes it to avoid to lock it. In order to hold it, 
 *          we need to convert it into a shared pointer via std::make_shared.
 *        
 * @version 0.1
 * @date 2023-03-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <memory>
 
 //pointer that will pass sp to spt
 std::weak_ptr<int> gw;

void chech_if_valid()
{
    std::shared_ptr<int> spt;
    std::cout << "gw.use_count() == " << gw.use_count() << "; ";

    // we have to make a copy of shared pointer before usage, lock returns a shared pointer with data:
    if (spt = gw.lock()) {
        std::cout << "*spt == " << *spt << '\n';
    }
    else { //can also use gw.expired() to check.
        std::cout << "gw is expired\n";
    }
}
 
int main()
{
    //in this scope, gw holds the data of sp which is 42.
    {
        std::shared_ptr<int> sp = std::make_shared<int>(42);
        gw = sp;
 
        chech_if_valid();
    }
    
    //here, gw is expired and no longer holds the data of sp, and sp is destroyed.
    chech_if_valid();
}