#include <iostream>
int main(int argc, char const *argv[])
{
//std::stringhas a constructor fromconst char *.This means that it is legal to write:
const char* str="hello";
std::string s = str;
}
