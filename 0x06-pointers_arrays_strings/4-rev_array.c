#include "main.h"
#include <string.h>
/**
 * reverse_array-reverse string
 * @a:int pointer of
 * @n:index of str
 * Return:reverse out put
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
