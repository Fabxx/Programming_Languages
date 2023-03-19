#include <stdio.h>

/*They're different operators, / is the quotient and % is the remainder. The compiler will optimize it to perform both with one division only in the generated assembly 

note: writing n % 10 is equivalent of: n * 10/100 

What happens in detail:

-The / operand is making a simple division between 25 and 5, giving 5 as a final result. This operand is taking the final output of the operation.
-The % operator does this operation: 25 * 5/100, the result is 1.25, but there's no remainder left after the result, so it gives 0.*/

int main()
{
	int x = 25 / 5, y = 25 % 5;

	printf("Division quotient: %d\n Division remainder:%d\n", x, y);

	return (0);
}