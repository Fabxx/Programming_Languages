#ifndef D60BF427_1A88_4438_9E22_36DA6E6162DB
#define D60BF427_1A88_4438_9E22_36DA6E6162DB

class printer {
	
public:
		static void init_message() { //static void required to access between class members.
		system("cls");
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
	
	static void msgInvalid() {
		cout << "Invalid number!" << endl;
		system("cls");
	}
};
#endif /* D60BF427_1A88_4438_9E22_36DA6E6162DB */
