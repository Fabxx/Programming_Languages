#include <iostream>
using namespace std;
#include <fstream>
#include <template.h>

fstream fileop::myfile;
string fileop::content;

void fileop::makefile() {

    myfile.open("text.txt", ios::out);
    myfile.close();
    myfile.open("text.txt", ios::in | ios::out);
}


void fileop::writeonfile() {
    if (myfile.is_open()){
         myfile << "writing text";
    }
    getline(myfile, content);

    cout << "Content of file: " << content << endl;
    myfile.close();
}

void fileop::checkfile() {

    myfile.open("text.txt");
    if (myfile.fail()){
        cout << "File not found, making file" << endl;
        makefile();
        writeonfile();
    } else{
        writeonfile();
    }
}
