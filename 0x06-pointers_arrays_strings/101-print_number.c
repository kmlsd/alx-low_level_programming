#include"main.h"
#include<string.h>
#include<stdio.h>
#include<math.h>


/**
 * print_number- a function that prints an integer
 * @n:n is integer
 * Return: 0 value
 */
void print_number(int n)
{
	unsigned int al;

	al = n;
	
	if (n < 0)
	{
		_putchar('-');
		al = -n;
	}

	if (al / 10 != 0)
	{
		print_number(al / 10);
	}
	_putchar((al % 10) + '0');

}
