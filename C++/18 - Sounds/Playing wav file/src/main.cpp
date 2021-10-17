/**
 * @file main.cpp
 * @author Prox_y
 * @brief This example shows how to play wav files with windows.h 
 *   	  playsound function. NOTE: to be able to reproduce sounds, you need to link
 *        to your compiler, in this case, in the MAKEFILE, the library winmm.lib
 *  	  into LFLAGS = -lwinmm section.
 * 			
 * @version 0.1
 * @date 2021-10-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <windows.h>

using namespace std;


int main() {

	int x = 0;
	cin >> x;
	if (x == 1){
		PlaySound("doggo1.wav", NULL, SND_SYNC);
	} else {
		PlaySound("gemma.wav", NULL, SND_SYNC);
	}
		return 0;
}
