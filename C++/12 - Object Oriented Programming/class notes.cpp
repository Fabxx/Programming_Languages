IF USING using namespace std AS GLOBAL, DO NOT CALL A CLASS DATA! CONFLICTING TYPE WITH ACCESS_RANgE.H!
		
		//STATIC MEMBERS ARE USED TO ACCESS A MEMBER CLASS FROM ANOTHER CLASS.
		
		EXAMPLE
		
		class data1 
		public:
		
				static void member();
				
		class data2
				
				void member2() {
				
				data1::member(); //accessing another member from data2.
				
					
				}
				
				
				//STATIC MEMBERS DO NOT LET ACCESS PRIVATE MEMBERS IF THOSE ARE NOT STATIC TOO.
				
				private: 
						 int a;
						 static int b;
				
				public: static void access() {
				
						a = 10; //NOT ALLOWED.
						using.b //ALLOWED.
						
						//IT'S CONVENIENT TO WORK WITH LOCAL VARIABLES IN A STATIC FUNCTION WHEN NECESSARY.
						  DECLARE THEM DIRECTLY INTO THE STATIC MEMBER, DO NOT TRY TO PASS THEM FROM ANYWHERE,
						  UNLESS THEY COME FROM ANOTHER STATIC MEMBER.
						  
						  
						  //WHILE WORKING WITH STATIC MEMBERS AND STATIC VARIABLES IN PUBLIC AND PRIVATE
						  TO RECALL A STATIC VARIABLE FROM PRIVATE TO PUBLIC STATIC MEMBER:
						  
						  execution {
						private:
							static int seed, n, a;
						public:
							static int randomizer() {
							seed = time(NULL);
							srand(seed); //VARIABLE RECALLED MUST HAVE CLASS NAME BEFORE IF IT'S STATIC VARIABLE.
							n = rand() % (10 - 1 - 0) + 0;
							return n;
			}		
							//ALSO STATIC VARIABLES CANNOT BE INITIALIZED.
                
                
        


                
                /*If in a class there are private variables, the functions/members that have to operate on them
                  MUST be all in the same class, or else we won't have access to the results we need.


                If we need a value of a variable from a class to another, like doing a switch in another class with a 
                value from another class. we can make that variable in the class public, out of all the members:
		*/
							  
class input {
    public: 
            static int choice; //public variable, ACCESSIBLE FORM OTHER CLASSES.
            static void inputinit() {
                cin >> choice;
            }
};

							  
							  
							  
class switcher {

public:
    static void switchoption() {
         switch (input::choice) { //switching choice value from another class member.
        case 1:
                power_sqr_root::powerenum1();
	            power_sqr_root::powerenum2();
	            power_sqr_root::square();
            break;
            case 2: 
           
                cout << "Exiting program..." << endl;
            break;
              
