#include "main.h"
#include <string.h>
/**
 * _strcmp-str  compare func
 * @s1:string 1 to cmpr
 * @s2:string 2 to cmpr
 * Return:> = 0 < out put
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;

	}

	return (0);

}
