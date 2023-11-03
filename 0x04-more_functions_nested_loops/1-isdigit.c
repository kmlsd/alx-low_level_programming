#include "main.h"

/**
 * _isdigit-is prg to chech digt
 * @c:is input part
 * Return:1 if c is digt
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
