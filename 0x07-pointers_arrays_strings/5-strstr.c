#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *t = needle;

		while (*n == *t && *t != '\0')
		{
			n++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (NULL);
}
