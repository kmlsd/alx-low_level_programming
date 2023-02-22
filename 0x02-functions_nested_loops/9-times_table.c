#include "main.h"
/**
 * times_table- function that prints the 9 times table, starting with 0.
 *
 * Return:table list
 */

void times_table(void)
{
	int k, l, m;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0');

		for (l = 0; l <= 9; l++)
		{
			_putchar(',');
			_putchar(' ');

			m = k * l;

			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
