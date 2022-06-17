#include <iostream>
using namespace std;

class a
{
public:
    virtual void operation()
    {
        int a = 10, b = 10;
        cout << "Operation is: " << a+b << endl;
    }
};

class b : public a
{
public:
    void operation()
    {
        int a = 10, b = 10;
        cout << "Operation is: " << a-b << endl;
    }
};

int main(void)
{
    a obj1, *obj2 = new a();

    obj1.operation(); //will give 20

    //before the override will give 20
    obj2->operation();
    //after the override will give 0.
    obj2 = new b();
    obj2->operation();

    return 0;
}