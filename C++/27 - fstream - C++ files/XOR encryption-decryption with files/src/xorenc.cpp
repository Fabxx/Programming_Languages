#include <xorenc.h>
#include <filemaker.h>
string xorenc::key;
string xorenc::string1;

void xorenc::textinput() {
    cout << "Insert string to write on file" << endl;
    getline(cin, string1);
}

void xorenc::encrypt_decrypt() {
    key = "rpgjprasdqdxdcsdqwdxxz<<<xx>>>>w64649844646325246643y64r462484t68447t44268t264";
    for (size_t i = 0; i < string1.size(); i++){
        string1[i] = string1[i] ^ key[i]; 
    }
}