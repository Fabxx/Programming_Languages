/**
 * @file main.cpp
 * @author Fabx
 * @brief std::set gives a container to store elements, and use functions to compare the values inside the container
 *         or modify the container itself, similar behavior to a vector.
 * 
 *          NOTES:
 *              -Does not allow inserting duplicated items
 *              -Items are automatically sorted by default in < order.
 *              -Can store any type.
 * 
 *          FUNCTIONS:  
    
                ITERATORS:

                    begin cbegin
                    (C++11)
                        returns an iterator to the beginning
                    

                    end cend
                    (C++11)
                        returns an iterator to the end
                    

                    rbegin crbegin
                    (C++11)
                        returns a reverse iterator to the beginning
                    

                    rend crend
                    (C++11)
                        returns a reverse iterator to the end
                    

                CAPACITY:

                    empty
                        checks whether the container is empty
                    

                    size
                        returns the number of elements
                    

                    max_size
                        returns the maximum possible number of elements
                   

                MODIFIERS:
                    clear
                        clears the contents
                    
                    insert
                        inserts elements or nodes (since C++17)
                    
                    insert_range
                    (C++23)
                        inserts a range of elements
                    
                    emplace
                    (C++11)
                        constructs element in-place
                    
                    emplace_hint
                    (C++11)
                        constructs elements in-place using a hint
                    
                    erase
                        erases elements
                    
                    swap
                        swaps the contents
                    
                    extract
                    (C++17)
                        extracts nodes from the container
                    
                    merge
                    (C++17)
                        splices nodes from another container
                    
                LOOKUP:

                    count
                        returns the number of elements matching specific key
                    
                    find
                        finds element with specific key
                    
                    contains
                    (C++20)
                        checks if the container contains element with specific key
                    
                    equal_range
                        returns range of elements matching a specific key
                    
                    lower_bound
                        returns an iterator to the first element not less than the given key
                    
                    upper_bound
                        returns an iterator to the first element greater than the given key
                    
                OBSERVERS:

                    key_comp
                        returns the function that compares keys
                    
                    value_comp
                        returns the function that compares keys in objects of type value_type
                    
 * @version 0.1
 * @date 2023-03-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <set>

int main(void)
{
    std::set<std::string> set;
    std::set<std::string>::iterator my_iterator;
    std::string string1 = "this", string2 = "that";

    set.insert("string");
    set.insert("string"); //duplicated, will be ignored.
    set.insert("string2");

    std::cout << set.size() << std::endl;

    //using iterator to print stored data.
    for (my_iterator = set.begin(); my_iterator != set.end(); my_iterator++) {
        std::cout << *my_iterator << std::endl;
    }

    //finding elements with iterator
    my_iterator = set.find("string2");

    if (my_iterator != set.end()) {
        std::cout << "string found: " << *my_iterator << std::endl;
    }

    //checking if value is already stored, "first" and "second" pointers are available like "map"
    if (set.insert("string2").second) {
        std::cout << "value stored" << std::endl;
    } else {
        std::cout << "value already inserted" << std::endl;
    }

    //erasing element that we want
     for (my_iterator = set.begin(); my_iterator != set.end(); my_iterator++) {
        if (*my_iterator == "string") {
            set.erase(*my_iterator);
        }
    }

    /*making element comparison with iterator. NOTE: in this specific case, 
      contains will always return the element since
      we are comparing the value that we find already.:
    */
    for (my_iterator = set.begin(); my_iterator != set.end(); ++my_iterator) {
        if (set.contains(*my_iterator)) {
            std::cout << *my_iterator << ": found" << std::endl;
        } else {
            std::cout << *my_iterator << ": not found" << std::endl;
        }
    }

    /*same scan but instead of using iterator, we can use a dedicated variable of the type we have stored, to look 
      for specific elements. Contains will look for the elements of S type this time.
      so it's like: if set contains string or string 2.*/
    for (std::string s : {"string", "string2"}) {
        if (set.contains(s)) {
            std::cout << s << ": found" << std::endl;
        } else {
            std::cout << s << ": not found" << std::endl;
        }
    }

    //example with set of numbers
    std::set<int> example = {1, 2, 3, 4};
 
    for(int x: {2, 5}) {
        if(example.contains(x)) {
            std::cout << x << ": Found\n";
        } else {
            std::cout << x << ": Not found\n";
        }
    }
    return 0;
}
