#include "main.h"
/**
 * print_array-hat prints n elements of an array of integers
 * @a:is int pointer
 * @n:n is int input
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(",");
	}
	}
	printf("\n");

}

