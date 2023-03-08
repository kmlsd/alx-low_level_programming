#include <unistd.h>
/**
 * _putchar-input or out put prg
 * @c:is input char
 *
 * Return:always 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
