#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list numbers;

	va_start(numbers, n);

	for (m = 0; m < n; m++)
	{
		if (!separator)
			printf("%d", va_arg(numbers, int));
		else if (separator && m == 0)
			printf("%d", va_arg(numbers, int));
		else
			printf("%s%d", separator, va_arg(numbers, int));
	}

	va_end(numbers);

	printf("\n");
}
