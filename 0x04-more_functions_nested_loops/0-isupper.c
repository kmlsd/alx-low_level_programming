#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c:is char
 * Return: 1  and 0 for input
 */

int _isupper(int c)
{


	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);


}
