#include <stdio.h>

/**
 * main - Entr
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, l;

	for (d = '0'; d < '9'; d++)
	{
	for (l = d + 1; l <= '9'; l++)
	{
	if (l != d)
	{
	putchar(d);
	putchar(l);
	if (d == '8' && l == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);

}
