#include "main.h"
/**
 * positive_or_negative - print if positive, zero or negative
 * n : input int var
 * return : successfuly
 * betty style doc for function main goes there
 *
 */
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
