#include <stdio.h>
/**
 * main - print  pr name
 * @argv: array
 * @argc:no of atgument
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
