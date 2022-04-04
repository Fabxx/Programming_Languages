using namespace std;
#include "class.h"

/*When gathering data between classes, we can use objects to store the data in those variables, but to not lose those data
  we have to use them as parameters and working in memory of those. We use the object for the same class in this case since the 
 data we need is only in A.

*/

void A::in() {

    cin >> A::b;
}

void B::out(A grab) {

    cout << "" << grab.b << endl;
}

