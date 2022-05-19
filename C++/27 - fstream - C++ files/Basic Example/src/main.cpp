/**
 * @file main.cpp
 * @author -_<
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
using namespace std;
#include <fstream>
#include <string>

int main() {
	
	fstream myfile;
	string retrieved;
	//file will be generated in the filesystem once we're done with it, fstream stores in storage only when necessary.
	myfile.open("name.txt", ios::in | ios::out);
	
	//checking if the file has been opened.
	if (myfile.is_open()){
			//writing to file a string.
		myfile << "Writing text";
		myfile.close(); //closing file to reset pointer at beginning
	} else {
		cout << "File not found" << endl;
		exit(0);
	}
	//exporting writed text into retreived string. You need to reopen the file to reset the pointer at the beginning.
			myfile.open("name.txt", ios::in | ios::out);
			cout << "Content of file: " << endl;
			//using getline to avoid that the reading stops at the first space. NOTE: the while condition is not necessary
			//this works if we put the getline even without the while.
			while(getline(myfile, retrieved)) {
				cout << " " << retrieved << endl;
			}
		myfile.close();
	return 0;
}
