Something common that happens with objects and classes is a circular depency, basically explained like this:

// file: A.h
class A {
  B _b;
};

// file: B.h
class B {
  A _a;
};

// file main.cc
#include "A.h"
#include "B.h"
int main(...) {
  A a;
}

/*What happens is that the compiler looks for B in A.h, and in the meantime B.h is looking for A. Since there's a problem in terms of order
it would be necessary to adjust it by using a third header or use another class above all the others which approaches both classes*/

// file: A.h
class A {
};

// file: B.h
class B {
};

//file C.h uses the already declared classes, this avoids circular depency and follows the compiler order and fixes the undeclared error.

class C {
  A _a;
  B _b;
};

