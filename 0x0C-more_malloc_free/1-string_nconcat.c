#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: n bytes of string 2
 *
 * Return: Pointer to allocated memory of s1 + nbytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, k, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l = 0, k = 0;
	while (*(s1 + l))
		l++;
	while (*(s2 + k))
		k++;

	if (n < k)
		k = n;

	s = malloc(sizeof(char) * (l + k + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < l; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = l; i < k; j++, i++)
		*(s + j) = *(s2 + i);

	*(s + j) = '\0';

	return (s);
}
