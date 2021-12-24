#ifndef CD4B963A_B333_4272_897E_D2FC7BC3CDF2
#define CD4B963A_B333_4272_897E_D2FC7BC3CDF2

#include <iostream>
using namespace std;
#include <fstream>
#include <string>

class fileop {
public:
        static void makefile();
        static void checkfile();
        static void writeonfile();    
private:

        static fstream myfile;
        static string content;
       
};

#endif /* CD4B963A_B333_4272_897E_D2FC7BC3CDF2 */
