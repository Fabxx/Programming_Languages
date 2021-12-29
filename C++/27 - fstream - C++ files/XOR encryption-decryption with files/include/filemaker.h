#ifndef BB46913E_372A_4B20_BD2C_4C693F5BE920
#define BB46913E_372A_4B20_BD2C_4C693F5BE920
#include <iostream>
using namespace std;
#include <fstream>

class filemaker {
           
    public:
            static fstream textfile;
            static bool iscreated;
            static void checkfile();
            static void makefile();
            static void writefile();
            static void readfile();
};


#endif /* BB46913E_372A_4B20_BD2C_4C693F5BE920 */
