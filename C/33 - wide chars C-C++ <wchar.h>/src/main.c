/*NOTE: Despite the fact that the type can handle strings and const chars, it's defined as short int.

char is 1 byte and follows ASCII lenght standard (does not allow characters that take more than one byte) 

in C/C++, we have also wchar_t (w stands for wide) that is defined as long char, allows special characters that take more than 1 byte.

(UNICODE format, like UTF16)

similar exmaples are char_16t, 32t, and so on, but they still follow ASCII standard %u for char16_t %U for char32_t.

to copy these type of strings instead of strcpy, you have to use wcscpy, from the library <wchar.h>.

wcstombs is used to convert a wchar_t to a const char *.
wcscat it's used to concatenate two widechar strings.

NOTE: Almost all the C string.h functions have these wide char equivalent functions

C library is <wchar.h>

C++ library is <cwchar> (same library but called in legacy way for C code.)
*/

#include <stdio.h>
#include <wchar.h>

int main()
{
	//example of copy
	wchar_t destination;
	wcscpy(destination, L"Mystring");
	/*
	a wchar_t can also be initialized in two ways to a char/const char: 
	
	-if we use sprintf/snprintf/g_strdup_printf (from glib) with "%ls" identifier (this also used to GIVE strings from other char buffers, 
	 not just initialize).
	
	-if we use the L symbol on a const char initialization (aka L"anystring") to assign a string to a wchar_t.
	 L considers the const char * string as long char (aka wchar_t, similar to a implicit cast), and discards it's const qualifier. 
	 this can be done as a argument as well without a variable in a function that requires a wchar_t ad a argument. See the usage 
	 of the wcharfunc below:
	 */
	
	destination = L"new string";
	wcharfunc(L"string argument");
	return (0);
}

//

void wcharfunc(wchar_t string)
{
	printf("%ls", string);
}
