#ifndef BF7D664C_3059_40D8_A0A3_418307188AEB
#define BF7D664C_3059_40D8_A0A3_418307188AEB

#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

class printer {
	
public:
		static void init_message() { //static void required to access between class members.
        cout << "\033[0;31mGuess the number between 1-10!" << endl;
			cout <<	"\033[0;37mEverytime you fail, the number to guess will be randomized" << endl;
    }
   
    static void msgSuccess() {
        cout << "\033[0;32mSuccess! exiting program...\n" << endl;
		system("pause");
    }
    
   static void msgFail() {
        cout << "\033[0;31mYou failed, try again!" << endl;
		cout << "\033[0;33mRandomizing value in 3 seconds\n" << endl;
    }
};

class audio {
public:
		static void playlose() {
			PlaySound("fail.wav", NULL, SND_SYNC);
		}
		static void playwin() {
			PlaySound("win.wav", NULL, SND_SYNC);
		}
};

class comparisons {
	public:
		 static bool comparison1(bool flag) {
			int a = 0, n = 0;

			if (a != n) {
				flag = true;				
			}
				return flag;
		}	

		static bool comparison2(bool flag) {
			int n = 0;
			if (n == 0) {
				flag = true;
			}
				return flag;
		}
};


class datas { //DO NOT CALL IT DATA, CONFLICTING TYPE WITH access_range.h!
private:
		int a = 0, n = 0; 
		int milli_seconds; 
		clock_t start_time;
		
public:

   void delay() {
    
     milli_seconds = 1000 * 1;
     start_time = clock();
    while (clock() < start_time + milli_seconds);
	
}

      void randomizer() {

	while (comparisons::comparison2(true)) { //check if n is still 0, then repeat the sequence.
		do{
			int seed = time(NULL);
			srand(seed);

			n = rand() % (10 - 1 - 0) + 0; //max - 1 - min + min.
										   //range between 0-10.
			printer::init_message();
			cin >> a; 

			if (comparisons::comparison1(true)) {
				printer::msgFail();
				audio::playlose();
			
			for (size_t i = 0; i < 3; i++) {
				datas::delay(); //integer number that will be multiplied to achieve seconds.
				cout << ".";
			}
				system("cls");	
		}

	} while (true);

			printer::msgSuccess();
			audio::playwin();
		}
  
	}
   
};


#endif /* BF7D664C_3059_40D8_A0A3_418307188AEB */
