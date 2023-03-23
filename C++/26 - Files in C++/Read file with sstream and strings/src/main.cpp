/**
 * @file main.cpp
 * @author Fabx
 * @brief Showing fstream usage to handle files, read and write from those.
 * 			Operations:
 * 			name.open("nameoffile")
 * 			name.close();
 * 			ios::in	Open for input operations.
			ios::out	Open for output operations.
			ios::binary	Open in binary mode.
			ios::ate	Set the initial position at the end of the file.
			If this flag is not set, the initial position is the beginning of the file.
			ios::app	All output operations are performed at the end of the file, appending the content to the current content of the file.
			ios::trunc	If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one.
			ofstream	ios::out
			ifstream	ios::in
			fstream	ios::in | ios::out
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

void function(const char *string)
{
 std::cout << string << " in C Style" << std::endl;
}

int main(int argc, char *argv[])
{
//sstream lets you treat a string like a file stream, so you can give input/output from another stream like a file.

	std::fstream file;
	std::string fileinput;
	std::string output_converted;
	std::stringstream fileoutput;
	
 	//Always open a file in ios::out when you have to save data in output buffer
	file.open("New file.txt", std::ios::out);
	//check if opening failed.
	if (file.fail())
	{
		fprintf(stderr, "Error in opening file\n");
	}

	std::cin >> fileinput;
	file.write(fileinput.c_str(), fileinput.size());
	file.close();

	//reading from file

	file.open("New file.txt", std::ios::in);

	if (file.is_open())
	{
		fileoutput << file.rdbuf();
		//Converts string stream into C++ normal string.
		std::cout << "File output: " << fileoutput.str() << std::endl;
	}

	//printing output via argument that requires const char *, first we export input stream as a normal string, then we convert into C style string.
	output_converted = fileoutput.str();
	function(output_converted.c_str());
	file.close();
}