#ifndef D31029FC_34F7_4015_872A_54FD04EC5B40
#define D31029FC_34F7_4015_872A_54FD04EC5B40
#include <iostream>
using namespace std;
#include <map>
#include <sstream>
#include <randomizer.h>

//class  T = typename T.
//first scheme attached to the class.
template<class hash, typename datatype, typename functiontype>
class hashtable {
  private:
     map<datatype, datatype> hash_table;
     //typename needed to call embedded class iterator under template.
     typename map<datatype, datatype>::iterator index;
     stringstream decin;
     string output;
 public:
         //inserting values in the hash table, calling randomizer member with it's template.
         /*calling constructor from another constructor. When directly calling another constructor
        you must recall the template and specify the data types. in this case datatype becomes int*/
         functiontype hashtablerandomizer() {
            for (size_t i = 0; i < 5; i++){
                randomizer<hash, int>(); 
                hash_table.insert(pair<datatype, datatype>(i+1, randomizer<hash, int>().number));
       }
    }
         //converting hash values to hexadecimal.
         functiontype dec2hex() {
            decin << hex << index->second;
                string out(decin.str());
                output = out;     
         }

      hashtable() {
        hashtablerandomizer();
            for (index = hash_table.begin(); index != hash_table.end(); index++){
                dec2hex();
                cout << "\tKEY: " << index->first;
                cout << "\tHASH: " << output  << endl;
           }    
    }     
};

#endif /* D31029FC_34F7_4015_872A_54FD04EC5B40 */

