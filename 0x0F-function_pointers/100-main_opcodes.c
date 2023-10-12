#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int size, n;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arg = (char *)main;

	for (n = 0; n < size; n++)
	{
		if (n == size - 1)
		{
			printf("%02hhx\n", arg[n]);
			break;
		}
		printf("%02hhx ", arg[n]);
	}
	return (0);
}
