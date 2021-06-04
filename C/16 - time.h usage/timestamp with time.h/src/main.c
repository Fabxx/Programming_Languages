/*The tm structure has the following definition 
more documentation at: 
https://www.tutorialspoint.com/c_standard_library/c_function_localtime.html

struct tm 

   int tm_sec;          seconds,  range 0 to 59          
   int tm_min;          minutes, range 0 to 59           
   int tm_hour;         hours, range 0 to 23             
   int tm_mday;         day of the month, range 1 to 31  
   int tm_mon;          month, range 0 to 11             
   int tm_year;         The number of years since 1900   
   int tm_wday;         day of the week, range 0 to 6    
   int tm_yday;         day in the year, range 0 to 365  
   int tm_isdst;        daylight saving time             
*/


#include <stdio.h>
#include <time.h>



struct tm get_time;


char* getCurrentTime(){
    char* result;
    time_t currentTime; //seed initialized
    struct tm *currentTimestamp; //structure pointer.

    currentTime = time(NULL);
    result = (char*)calloc(25, sizeof(char)); //memory allocation for each parameter size in the "", including brackets, number of integers ecc..
    currentTimestamp = localtime(&currentTime); //Converts given time since epoch as std::time_t value into calendar time, expressed in local time.

	//we print with the buffer size of the pointer with sprintf.
    sprintf(result, "[%4d/%2d/%2d - %2d:%2d]", currentTimestamp->tm_year + 1900,
                                        currentTimestamp->tm_mon + 1,
                                        currentTimestamp->tm_mday,
                                        currentTimestamp->tm_hour,
                                        currentTimestamp->tm_min);

    return result;
} 

int main()
{
    char *timestamp; //pointer used to store the return value from function.
	timestamp = getCurrentTime();
    puts(timestamp);
	return (0);
}
