#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat-fun concatenates two string
 * @dest:destination string
 * @src:source string
 * Return:is dest (dest +src)
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	i = 0;
	while (dest[i] !=  '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
