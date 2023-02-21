#include "main.h"
#include <unistd.h>

/**
 * main-input out head
 * return:alway 0
 */

void print_alphabet_x10(void);
{
	char c;
	int i;


	for (i = 0; i <= 9; i++)
	{

	for (c = 'a'; c <= 'z'; c++)
	{

		_putchar(c);
	}
	_putchar('\n');
	}
	return;

}
