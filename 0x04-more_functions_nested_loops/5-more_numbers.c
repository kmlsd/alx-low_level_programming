#include "main.h"
/**
 * more_numbers- that prints 10 times the numbers, from 0 to 14,
 *
 * Return:alist of 0-9
 */
void more_numbers(void)
{
	int a, c;

	for (c = 0; c <= 9; c++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('1');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
