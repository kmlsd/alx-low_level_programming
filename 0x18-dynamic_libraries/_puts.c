#include "main.h"
/**
 * _puts - prints an input string
 * @strg: the string to be printed
 *
 * Return: Nothing
 */
void _puts(char *strg)
{
	int i = 0;

	if (!strg)
	return ;
	while (strg[i] != '\0')
	{
		_putchar(strg[i]);
		i++;
	}
	return ;

}


