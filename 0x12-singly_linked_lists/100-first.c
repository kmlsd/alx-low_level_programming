#include <stdio.h>

void statement(void) __attribute__ ((constructor));

/**
 * printStatement - Print out a statment, before main function
 */
void statement(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
