#include "main.h"
#include <stddef.h>

/**
 * _strlen-function that returns the length of a string
 * @s:is string
 * Return:is length
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);

}
