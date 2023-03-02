#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * string_toupper-change str lower letter to upper
 *@n:n is pointer
 * Return:upper letter
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] + 32;
		i++;
	}
	return (n);
}

