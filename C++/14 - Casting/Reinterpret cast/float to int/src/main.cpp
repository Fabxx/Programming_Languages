#include <iostream>
using namespace std;
int main()
{
    float a = 90;
    std::cout<< reinterpret_cast<int>(&a) << std::endl;
    return 0;
}
