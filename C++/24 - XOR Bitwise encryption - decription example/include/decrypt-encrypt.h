#ifndef F52EEA36_9A8C_4056_86AC_F92AE7DA802D
#define F52EEA36_9A8C_4056_86AC_F92AE7DA802D
#include <libs.h>

class xorclass {
    private:
        static string mystring;
        static char16_t key;
    public:
        static void encrypt();
        static void decrypt();
        static void outputword();
};

#endif /* F52EEA36_9A8C_4056_86AC_F92AE7DA802D */
