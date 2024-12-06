/*Header files can help in reducing the size of a source file in terms of lines.
  
  To include a local library:

  #include "libname.h"

  to include a system library:

  #include <libname.h>

  We can declare functions in header files, and then define their instructions in the related source code
  
  or 
  
  we can define and declare the functions in the header files directly, without adding extra source files,
  with the use of static inline keywords.
*/

#include <stdio.h>
#include "header.h"

int main(void)
{
    func();
    function();

    return 0;
}
