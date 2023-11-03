#include "main.h"
#include <unistd.h>

/**
 * main-input out head
 * return:alway 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
