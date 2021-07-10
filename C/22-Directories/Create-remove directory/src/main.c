/**
 * @file main.c
 * @author Sqrdelta
 * @brief A simple program that shows how to create and remove a directory.
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <sys/stat.h>

int main() {

	int directory;

	directory = mkdir("wave_files");

	rmdir("wave_files");

	return 0;
	
}