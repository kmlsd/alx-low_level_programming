#include "main.h"
#include <unistd.h>

/**
 * _putchar-input out head
 * str: pointer
 * return:alway 0
 */
int  _putchar(char str)
{
	return (write(1, &str, 1));
}
