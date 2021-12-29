#include <iostream>
using namespace std;
#include <string>
#include <xorenc.h>
#include <filemaker.h>

int main() {
	
	filemaker::checkfile();
	if (filemaker::iscreated == false){
		filemaker::makefile();
		xorenc::textinput();
		xorenc::encrypt_decrypt();
		filemaker::writefile();
		filemaker::readfile();
		} else {
			filemaker::readfile();
			xorenc::encrypt_decrypt();
			filemaker::writefile();
		}
		system("pause");
		return 0;
}
