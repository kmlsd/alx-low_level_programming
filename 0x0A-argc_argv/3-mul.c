#include <stdio.h>
#include <stdlib.h>
/**
 * main - print  pr name
 * @argv: array
 * @argc:no of atgument
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, k = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	while (i < argc)
	{
		k *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", k);
	return (0);
}

