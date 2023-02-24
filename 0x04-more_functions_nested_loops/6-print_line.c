#include "main.h"

/**
 * print_line-fun draws straigh line in the terminal
 * @n:no time character _be printed
 * Return:line
 */
void print_line(int n)
{
	if (n <= 0)
	{
	
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

