#include "main.h"
/**
 * print_most_numbers-func print no 0 up 9 exc 2&4
 *
 * Return:alist of 0-9
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');

}

