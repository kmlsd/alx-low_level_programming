#include <stdio.h>

/**
 * main - Entr
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d, l;


	for (c = '0'; c < '8'; c++)
	{
	for (d = c + 1; d < '9'; d++)
	{
	for (l = d + 1; l <= '9'; l++)
	{
	if (l != d && l != c && d != c)
	{
	putchar(c);
	putchar(d);
	putchar(l);
	if (c == '7' && d == '8' && l == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);

}
