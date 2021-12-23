#include <iostream>
using namespace std;
#include <string>

int main() {

	string string1;
	string string2;
	size_t pos;
	string string3;

	 getline(cin, string1);

		//giving to string2 the characters from string1 from beginning until it's lenght it's reached.
		string2 = string1.substr(0, string1.length()); 
		cout << "String2 content found in string1: " << string2 << endl;

		//giving exact characters to find with a size_t variable type, and stored with a sort of iterator
		pos = string1.find("Hello");
		//Findind substring with given stored pos.
		string3 = string1.substr(pos);

		cout << "Word found and applied on string3: " << string3 << endl;

		return 0;
		
}