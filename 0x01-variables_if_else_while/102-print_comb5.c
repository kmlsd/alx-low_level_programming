#include <stdio.h>

/**
 * main - Entr
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, l;

	for (d = 0; d < 99; d++)
	{
	for (l = d + 1; l <= 99; l++)
	{
	putchar((d / 10) + '0');
	putchar((l % 10) + '0');
	putchar(' ');
	putchar((l / 10) + '0');
	putchar((l % 10) + '0');
	if (d == 98 && l == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
