#include <stdio.h>
#include <math.h>

/**
 * main-prints larges prime factof of 612852475143
 * Return: aways 0  success
 */
int main(void)
{
	int x, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
	if (num % x == 0)
	{
	maxf = num / x;
	}
	}
	printf("%d\n", maxf);

	return (0);
}
