#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int l, i;
	char *st;

	if (str == NULL)
		return (0);

	l = 0;
	while (*(str + l))
		l++;

	st = malloc(sizeof(char) * l + 1);

	if (st == 0)
		return (0);

	for (i = 0; i <= l; i++)
	{
		*(st + i) = *(str + i);
	}
	return (st);

}
