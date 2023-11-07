#include "main.h"
#include <stdio.h>
/**
 * print_array-hat prints n elements of an array of integers
 * @a:is int pointer
 * @n:n is int input
 * Return:void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d", *(a + i));
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
