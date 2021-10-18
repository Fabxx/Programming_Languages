#ifndef D110145E_24D1_41FD_8570_87D8545919BA
#define D110145E_24D1_41FD_8570_87D8545919BA
#include <execution.h>
#include <printer.h>
#include <audio.h>
class datas { //!DO NOT CALL IT "data", CONFLICTING TYPE WITH access_range.h!
public:

      void mainfunc() {
		  bool flag = false;
		do{
			printer::init_message();
			if (execution::input() != execution::randomizer()) {
					printer::msgFail();
						audio::playlose();	
		} else {
			flag = true;
				printer::msgSuccess();
				audio::playwin();
		}

	} while (flag == false);
		
		}
};

#endif /* D110145E_24D1_41FD_8570_87D8545919BA */
