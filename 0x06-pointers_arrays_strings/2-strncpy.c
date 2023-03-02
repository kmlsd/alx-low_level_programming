#include "main.h"
#include <string.h>
/**
 * _strncpy-str copy func
 * @dest:destination str
 * @src:source str
 * @n:n is int no of index of source that can be copy
 * Return: return is dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
