#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decs = 0;
	int i = 0, base2 = 1, k;

	if (!b)
		return (0);
	while (b[i])
		i++;
	i -= 1;
	k = i;

	while  (i >= 0)
	{
		if (i == k)
			base2 = 1;
		else
			base2 *= 2;

		if (b[i] != 1 || b[i] != 0)
			return b[i];

		if  (b[i] & 1)
			decs += base2;
		i--;

	}

	return (decs);

}

