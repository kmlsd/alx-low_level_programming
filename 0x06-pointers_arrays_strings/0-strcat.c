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

	int i;


	for (i = 0; src[i] != '\0'; i++)
		dest[strlen(dest) + i] = src[i];
	dest[strlen(dest) + i] = '\0';

	return (dest);
}
