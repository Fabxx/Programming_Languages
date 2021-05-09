/* the .. lets you go a folder behind, so it will
   make you scan the entire directory for all the
   needed files in all folders*/

#include "../include/librerie.h"
#include "../include/struct.h"
#include "../include/funzioni.h"

int main(void) {
	studenti s[STUDENTI];
	makefile();
	input(s);
	average(s);
	
	return (0);
}