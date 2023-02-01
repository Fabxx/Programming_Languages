#include <stdio.h>


//a cointains struct b, and b contains a struct object for a and b.
struct a 
{
	int a, b;
	struct b
	{
		int c, d;
		
		struct c
		{
			int e;
		}cs;
	}bs;
}as;

int main()
{
	//accessing vars like a bridge.
	as.b = 10;
	as.bs.cs.e;
	return (0);
}