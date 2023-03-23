/**
 * @file main.cpp
 * @author Fabxx
 * @brief Equivalend of std::map, can also be compared, copied/moved. Unlike std::map though, it doesn't have a iterator for
 * 	      multiple pair positions, so you can make only one pair, useful if multiple pairs are not needed. In that case, see the 
 * 		  chapter 26 - std::map.
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <utility>

int main()
{
	std::pair<int, std::string> string_pair;

	string_pair.first = 1;
	string_pair.second = "string";

	std::cout << "First: " << string_pair.first << "\nSecond: " << string_pair.second << std::endl;
	
	//can also create a pair with this function:
	string_pair = std::make_pair(1, "string2");
	return 0;
}