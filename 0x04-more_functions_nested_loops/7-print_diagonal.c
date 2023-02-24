#include "main.h"

/**
 *  print_diagonal-fun draws straigh line in the terminal
 * @n:no time character _be printed
 * Return:line
 */
void  print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= n; j++)

			{
				if (j == i)

					_putchar('\\');

				else if (j < i)

					_putchar(' ');
			}
			_putchar('\n');
		}
	}


}
