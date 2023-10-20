#include <iostream>

void cstring(char *string)
{
  std::cout << string << std::endl
}

int main(void)
{
  std::string s = "hello";

  //c_str() operator casts a C++ string into a C string, (aka char*/const char *)
  cstring(s.c_str());

  return 0;
}
