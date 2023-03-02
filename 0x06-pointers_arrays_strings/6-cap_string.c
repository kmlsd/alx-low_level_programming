#include "main.h"
#include <string.h>
/**
 * cap_string-that capitalizes all words of a string
 * @n:pointer
 * Return:capital all char of str
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

