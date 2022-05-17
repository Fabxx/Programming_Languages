#include <iostream>
using namespace std;
#include <fstream>
#include <template.h>

fstream fileop::myfile;
string fileop::content;

void fileop::writeonfile() {
      /*file will be generated in the filesystem with ios::out. it is possible to write on file, but not to read on it.
       *after the file has been created, we can open it as ios::in to use it as a read buffer
       DO NOT DO BOTH ios::in and ios::out if you want to create it at first! or else it expects that the file already 
       exists as a input buffer and won't be created!*/
      
    myfile.open("text.txt", ios::out);
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
