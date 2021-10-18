#ifndef BF7D664C_3059_40D8_A0A3_418307188AEB
#define BF7D664C_3059_40D8_A0A3_418307188AEB

#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;


class execution {
	public:
		static int randomizer() {
				int seed = time(NULL);
				srand(seed);
				int n = rand() % (10 - 1 - 0) + 0;
				cout << "-Number generated:  " << n << endl;
				return n;
			}

		static int input() {
			int a = 0;
			cin >> a;
			return a;
		}
};


   

#endif /* BF7D664C_3059_40D8_A0A3_418307188AEB */
