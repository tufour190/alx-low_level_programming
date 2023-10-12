#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int calc1, calc2, result;
	char p;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc1 = atoi(argv[1]);
	calc2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	p = *argv[2];

	if ((p == '/' || p == '%') && calc2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(calc1, calc2);

	printf("%d\n", result);

	return (0);
}
