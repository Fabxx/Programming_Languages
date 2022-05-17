#include <iostream>
using namespace std;
#include <fstream>
#include <template.h>

fstream fileop::myfile;
string fileop::content;

void fileop::writeonfile() {
      //file will be generated in the filesystem once we're done with it, fstream stores in storage only when necessary.
    myfile.open("text.txt");
    //alternative check
    if (!myfile.fail()) {
        //code
    }
    //checking if the file hasn't been closed at the beginning, or else we open it and we write on it.
    if (myfile.is_open()){
         myfile << "writing text";
    } else {
        myfile.open("text.txt");
        myfile << "writing text";
    }
    myfile.close();
}

void fileop::readfile() {

    myfile.open("text.txt");
     cout << "File content: " << endl; 
     getline(myfile, content);
     cout << " " << content << endl;
     myfile.close();
}

void fileop::checkfile() {

    myfile.open("text.txt");

    if (myfile.fail()){
        cout << "File not found, making file" << endl;
        makefile();
        writeonfile();
        readfile();
    } else{
        readfile();
    }
}
