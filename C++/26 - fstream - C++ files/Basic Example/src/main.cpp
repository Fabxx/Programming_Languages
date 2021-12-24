/**
 * @file main.cpp
 * @author -_<
 * @brief Showing fstream usage to handle files, read and write from those.
 * 			Operations:
 * 			name.open("nameoffile")
 * 			name.close();
 * 			name.fail(); //checks if the file.open() function fails.
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
using namespace std;
#include <fstream>
#include <string>

int main() {
	
	fstream myfile;
	string retrieved;

	//checking if file has been created already
	myfile.open("name.txt");
	if (myfile.fail()){
		cout << "File not found, making one." << endl;
		//creating the txt file. it's necessary to open the file for output, then closing it and reopen it for both input and output to be created.
		myfile.open("name.txt", ios::out);
		myfile.close();
		myfile.open("name.txt", ios::in | ios::out);
	
	} else{
		//checking if the previous myfile.open() is active.
	if (myfile.is_open()){
			//writing to file a string.
		myfile << "Writing text";
	} else {
		cout << "File is closed, open it first!" << endl;
	}
	}
	
	//exporting writed text into retreived string.
		myfile >> retrieved;
		myfile.close();
	cout << " " << retrieved << endl;
	
	return 0;

}