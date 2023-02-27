#include "main.h"

/**
 * rev_string- that reverses a string
 * @s:string  input
 *
 */
void rev_string(char *s)
{
	int ln = 0, in = 0;
	char tm;

	while (s[in++])
	ln++;

	for (in = ln - 1; in >= ln / 2; in--)
	{
	tm = s[in];
	s[in] = s[ln - in - 1];
	s[ln - in - 1] = tm;
	}
}

