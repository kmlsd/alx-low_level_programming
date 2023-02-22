#include "main.h"

/**
 * print_last_digit-hat prints the last digit of a number
 * @n:is input integer
 * Return:values is the last digit
 */

int print_last_digit(int n)
{
	int t = n % 10;

	if (t < 0)
		t *= -1;

	_putchar(t + '0');

	return (0);

}
