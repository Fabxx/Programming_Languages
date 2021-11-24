#include <iostream>

using namespace std;

template<typename type, size_t value>

class text {
	public:
			type array[value];
};


int main() {
   
   text<int, 5> nameoftemplate;
   for (size_t i = 0; i < 5; i++){
	   cin >> nameoftemplate.array[i];
   }
   for (size_t i = 0; i < 5; i++){
	   cout << " " << nameoftemplate.array[i];
   }

   return 0;
}