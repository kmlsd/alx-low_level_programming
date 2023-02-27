#include "main.h"
/**
 * swap_int-swap value of a$b
 * @a:int to be swap
 * @b:int to be swap
 *
 * Return:is swap
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
