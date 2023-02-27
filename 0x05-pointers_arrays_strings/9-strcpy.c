#include "main.h"
/**
 * _strcpy-cop pointed to by src, including the terminating null byte
 * @dest:Destinatio value
 * @src:source value
 * Return: point to des
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
