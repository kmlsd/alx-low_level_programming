#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * print_number- a function that prints an integer
 * @n:n is integer
 * Return: 0 value
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
