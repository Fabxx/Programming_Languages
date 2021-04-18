#include <iostream>
using namespace std;
 
int main () {
    char grade;
   // local variable declaration:
    cout << "What grade in Calculus did you get? " << endl;
    cout << "Only enter the letters A, B, C, D, or F: " << endl;
    cin >> grade;
  // switching the cases with single chars, in this case we used the char grade as a varaible.
   switch(grade) {
      case 'A' :
        cout << "Excellent!" << endl; 
        break;
      case 'B' :
        cout << "Good job" << endl;
        break;
      case 'C' :
        cout << "Ok" << endl;
        break;
      case 'D' :
        cout << "Darn. So close to passing." << endl;
        break;
      case 'F' :
        cout << "C'mon!" << endl;
        break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Good bye." << endl;
 
   return 0;
}
