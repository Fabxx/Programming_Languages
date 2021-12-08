#include <libs.h>

string xorclass::mystring;
char16_t xorclass::key; //KEY MUST BE A CHARACTER TO USE WITH ENCRYPTION.

void xorclass::encrypt() {

    cout << "Insert a string" << endl;
    cin >> mystring;
    key = 'K';
    for (size_t i = 0; i < mystring.size(); i++){
        //applying XOR encryption for each character.
        mystring[i] = mystring[i] ^ key; 
    }
    outputword();
}

//repeating the XOR to reverse encryption with same key.
void xorclass::decrypt() {
    cout << "Decrypting..." << endl;
    for (size_t i = 0; i < mystring.size(); i++){
        mystring[i] = mystring[i] ^ key;
    }
    outputword();
}

void xorclass::outputword() {
    cout << "word: " << mystring << endl;
}

