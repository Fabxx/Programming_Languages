#include <fstream>
#include <filemaker.h>
#include <xorenc.h>
bool filemaker::iscreated;
fstream filemaker::textfile;

//Checking if the open operation wasn't successfull, or else we create the file.
void filemaker::checkfile() {
        iscreated = false;
        textfile.open("text.txt");
    if (!textfile.fail()) {
            cout << "File already created, aborting makefile." << endl;
            iscreated = true;
    } else {
        cout << "File not found, making one..." << endl;
    }
       textfile.close();
}

void filemaker::makefile() {
    textfile.open("text.txt", ios::out);
    textfile.close();
    textfile.open("text.txt", ios::in | ios::out);
    textfile.close();
}

void filemaker::writefile() {
    textfile.open("text.txt");
    textfile << xorenc::string1 << endl;
    textfile.close();
}

void filemaker::readfile() {
    textfile.open("text.txt");
    getline(textfile, xorenc::string1); 
    textfile.close();
    cout << "File content: " << xorenc::string1 << endl;
}