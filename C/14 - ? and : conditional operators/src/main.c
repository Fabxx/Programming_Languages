/*These are called ternary operators. It is a more compact way of writing conditions.

  the syntax is explained as follows:

  is a = to 0? if no give to it the value of 10, if yes give it 20.

  equivalent of:

  if (a == 0) {
    a = 20;
  } else {
    a = 10
  }

    as you can see it is way more compact to write it like so. but an if-else becomes mandatory when we need 
    nested conditions with else ifs and so on. If it's only a single condition to verify then the syntax above can be more clean.

*/

#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;

    a = 0 ? 10 : 20;

    printf("value of a: %d\n", a);

    return 0;
}
